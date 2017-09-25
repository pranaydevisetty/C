#include<stdio.h>

int main()
{
	int A = 15;
	int B = 14;
	
	int m = 1;
	int c =0;
	int i;
	for(i=0;i<32;i++)
	{
		if((A&(1<<i))==(B&(1<<i)))
			continue;
		c++;
	}
	printf("%d",c);
}
