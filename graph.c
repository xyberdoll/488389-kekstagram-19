
/**
 *
 * @Name : RamseyNumber/graph.c
 * @Version : 1.0
 * @Programmer : Max
 * @Date : 2019-07-29
 * @Released under : https://github.com/BaseMax/RamseyNumber/blob/master/LICENSE
 * @Repository : https://github.com/BaseMax/RamseyNumber
 *
 **/
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

#define FOR(index, start, end)\
	for(uint64_t index=start; index<end;index++)

#define SET_PAIR(item, first, end) \
	item.a=first;\
	item.b=end;

typedef enum {
	false,