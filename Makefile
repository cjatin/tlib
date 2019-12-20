all:
	mkdir -p build
	hipcc  -fPIC -shared src/hipMalloc.cc src/hipVectors.cc src/tlib.cc -o build/libtlib.so -Iinclude/ -O3

clean:
	rm -rf build/

old : all
	hipcc test/bench.cc -Wl,-rpath build/ -Lbuild/ -ltlib -isystem ${BENCHMARK}/include -L${BENCHMARK}/lib -lbenchmark -pthread -o build/lold -Iinclude -O3 

new : all
	hipcc test/bench.cc -Wl,-rpath build/ -Lbuild/ -ltlib -isystem ${BENCHMARK}/include -L${BENCHMARK}/lib -lbenchmark -pthread -o build/lnew -Iinclude -O3

compare:
	${BENCHMARK_TOOLS}/compare.py  benchmarks ./build/lold ./build/lnew
