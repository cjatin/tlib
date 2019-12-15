all:
	mkdir -p build
	hipcc  -fPIC -shared src/hipMalloc.cc src/hipVectors.cc src/tlib.cc -o build/libtlib.so -Iinclude/

clean:
	rm -rf build/

old : all
	hipcc test/bench.cc -Lbuild/ -ltlib -isystem ${BENCHMARK}/include -L${BENCHMARK}/lib -lbenchmark -pthread -o build/lold -Iinclude 

new : all
	hipcc test/bench.cc -Wl,-rpath build/ -Lbuild/ -ltlib -isystem ${BENCHMARK}/include -L${BENCHMARK}/lib -lbenchmark -pthread -o build/lnew -Iinclude 

compare:
	${BENCHMARK_TOOLS}/compare.py  benchmarks ./lold ./lnew
