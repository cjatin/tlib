all:
	mkdir -p build
	hipcc -c -fPIC -static src/tlib.cc src/hipMalloc.cc -o build/libtlib.so -Iinclude/

clean:
	rm -rf build/
