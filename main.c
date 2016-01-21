#include <stdio.h>
#include <stdlib.h>
#include "ListArray.h"


int main(int argc, char * argv[])
{
	ListArray *l = NULL;

	l = initialize(l, 10);
	printContents(l);
	
	freeList(l);
	free(l);
	l = NULL;
	printContents(l);

	//Prevent console from closing
	getchar();

	return 0;

}