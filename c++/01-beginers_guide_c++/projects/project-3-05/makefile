.PHONY: all project run

all: project;

project:
	g++ -std=c++11 -Wall main.cpp -o $@
run: project;
	./project && rm project
