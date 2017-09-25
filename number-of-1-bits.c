#include<stdio.h>
#include<stdlib.h>

int hammingWeight(int n)
{
    int c=0;
    while(n)
    {
        c = c+(n&1);
        n = n>>1;
    }
    return c;
}

int main()
{
	int a = 5;
	printf("%d",hammingWeight(a));
	return 0;
}
