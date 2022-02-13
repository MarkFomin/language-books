.PHONY: all, run
all:
	g++ -std=c++11 -Wall *.cpp -o sample
run: all;
	printf "Test data\n">test
	./sample test 5 && rm sample test
