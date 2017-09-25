#include<stdio.h>
#include<stdlib.h>

int nsetbits(int n)
{
	int c=0;
	int i;
	int a=1;
	int b;
	while(n)
	{
		c=c+(n&1);
		n=n>>1;
	}
	return c;
}

int main()
{
	int n;
	printf("Enter n:");
	scanf("%d",&n);
	int result = nsetbits(n);
	
	printf("result=%d",result);
	
	return 0;	
}
