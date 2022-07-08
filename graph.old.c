/**
 *
 * @Name : RamseyNumber/graph.old.c
 * @Version : 1.0
 * @Programmer : Max
 * @Date : 2019-07-15
 * @Released under : https://github.com/BaseMax/RamseyNumber/blob/master/LICENSE
 * @Repository : https://github.com/BaseMax/RamseyNumber
 *
 **/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
	int key;
	int value;
	int color;
} pair;

typedef struct  {
	pair item;
} val;

int factorial(int v) {
	int result=v;
	for(int i=1;i<v;i++) {
		result*=i;
	}
	return result;
}

int main(int argc, char const *argv[]) {
	const int k=5;
	const int c=2;
	/////