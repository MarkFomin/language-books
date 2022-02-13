.PHONY: all, run
all:
	g++ -std=c++11 -Wall *.cpp -o sample
run: all;
	printf "10 10.23\nThis is short text file\n">test
	./sample && rm sample test
