#include <iostream>
#include <random>
#include <time.h>
#include "tools.h"

/*
参考： 
https://zh.cppreference.com/w/cpp/numeric/random

*/

int nrand(int n,int m)
{
    static std::default_random_engine engine(time(0));
    static std::seed_seq seed2{engine(), engine(), engine(), engine(), engine(), engine(), engine(), engine()}; 
    static std::mt19937 generator(seed2);
	static std::uniform_int_distribution<int>  distribution(1,100);

	int value;
	while (true){
		value=distribution(generator) ;
		if (value >= n)
			break;
	}
	return value;
}