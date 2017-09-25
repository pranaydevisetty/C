#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *	p=NULL;
	p=(int *) malloc(sizeof(int));
	
	printf("%d",*p);
	
	return 0;
}
