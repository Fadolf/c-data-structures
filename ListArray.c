#include "ListArray.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isVoid(ListArray * l)
{
	if (NULL == l)
		return 1;
	else
		return 0;
}

ListArray * initialize(ListArray * l, int initialSize)
{
	int size = 5, i = 0;
	if (initialSize <= 0)
		size = DEFAULT_SIZE;
	else
		size = initialSize;

	if (isVoid(l)){
		l = (ListArray *)malloc(sizeof(ListArray));
		l->nodeData = (Data *)malloc(sizeof(Data *) * size);
		for (i = 0; i < size; i++)
		{
			strcpy(l->nodeData[i].name, "HELLO !");
		}
		l->size = size;
		return l;
	}
	else
		return l;
}

void printContents(ListArray *l)
{
	int i = 0;

	if (!l)
	{
		printf("List is void, nothing to print\n");
		return;
	}

	printf("Contents of the list\n");
	for (i = 0; i < l->size; i++)
	{
		printf("[%d]: %s\n",i, l->nodeData[i].name);
	}
}

void freeList(ListArray *l)
{
	if (l)
	{
		free(l->nodeData);
		l->nodeData = NULL;
	}	
}