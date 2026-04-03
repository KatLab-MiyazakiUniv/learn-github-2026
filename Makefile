.PHONY: all clean build test

all: test

clean:
	rm -rf build

build:
	mkdir -p build
	cd build && cmake .. && make

test: clean build
	cd build && export GTEST_COLOR=1 && ctest --output-on-failure -VV