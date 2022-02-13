.PHONY: all, run
all:
	g++ -std=c++11 -Wall *.cpp -o sample
run: all;
	printf "1234567890" > test
	./sample test && rm sample test
