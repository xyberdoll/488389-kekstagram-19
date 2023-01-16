/**
 *
 * @Name : RamseyNumber/graph.test.c
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

typedef struct {
	int a;
	int b;
	int c;
} box;

box items[]=
{
	{1, 2, 3},
	{1, 2, 4},
	{1, 2, 5},
	{1, 3, 4},
	{1, 3, 5},
	{1