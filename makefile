all:
	g++ -std=c++11 -I./include -L./lib test.cc -lgtest -lpthread
