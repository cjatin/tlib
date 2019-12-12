all:
	mkdir -p build
	clang++ -c -fPIC -static src/tlib.cc -o build/libtlib.so -Iinclude/

clean:
	rm -rf build/
