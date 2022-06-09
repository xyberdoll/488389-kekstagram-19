
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
	true,
} bool;

typedef struct {
	uint64_t a;
	uint64_t b;
} pair;

typedef struct {
	uint64_t a;
	uint64_t b;
	unsigned int c;
} color;

int art;
int count;
pair **items;
color *edges;
uint64_t edgesCount=0;

unsigned int randomColor() {
	return rand() % count;
}

unsigned int found(uint64_t i, uint64_t j) {
	FOR(i, 0, edgesCount) {
		// printf("==>%d\n", i);
		if(
			(edges[i].a == i && edges[i].b == j) ||
			(edges[i].a == j && edges[i].b == i)) {
			return edges[i].c;
		}
	}
	return -1;
}

int main(int argc, char const *argv[]) {
	art=43;
	count=2;	
	srand(time(0));
	items=malloc(sizeof(pair*)*962598);
	uint64_t first_limit=10000;
	uint64_t first_limit_index=0;
	edges=malloc(sizeof(color)*903);
	edgesCount=0;
	FOR(i, 0, art) {
		FOR(j, i+1, art) {
			SET_PAIR(edges[edgesCount], i+1, j+1);
			edgesCount++;
		}
	}
	uint64_t itemsCount=0;
	FOR(i, 0, art) {
		FOR(j, i+1, art) {
			FOR(l, j+1, art) {
				FOR(w, l+1, art) {