#include<stdio.h>

int main()
{
	int n = 8;
	
	int m = n;
	int c = 0;
	while(m)
	{
		c = c+(m&1);
		m = m>>1;
	}
	printf("%d",c);
	
	return 0;
}
