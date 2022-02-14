.PHONY: all, run
all:
	g++ -std=c++11 -Wall *.cpp -o sample
run: all;
	./sample makefile main.cpp test && cat test && rm sample test
