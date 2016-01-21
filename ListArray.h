#ifndef LISTARRAY_H
#define LISTARRAY_H

#define DEFAULT_SIZE 5

typedef struct Data{
	char name[26];
} Data;

typedef struct ListArray
{
	Data * nodeData;
	int size;
} ListArray;



int isVoid(ListArray * l);
ListArray * initialize(ListArray * l, int initialSize);
void printContents(ListArray *l);
#endif