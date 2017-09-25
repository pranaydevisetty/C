#include<stdio.h>
#include<stdlib.h>

int main()
{
	unsigned int M = 2108;
	
	unsigned int mask = 0;
	int it;
	for(it =2; it<=6;it++)
	{
		mask = mask|(1<<it);
	}
	printf("%u",mask);
	unsigned int res = M&mask;
	
	printf("%u",res);
	return 0;
}
