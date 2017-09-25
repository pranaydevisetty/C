#include<stdio.h>
#include<stdlib.h>
int updateBits(int n, int m, int i, int j) {
int max = ~0; /* All 1’s */

// 1’s through position j, then 0’s
int left = max - ((1 << j) - 1);
printf("\n%u",left);
// 1’s after position i
 int right = ((1 << i) - 1);
printf("\n%u",right);
 // 1’s, with 0s between i and j
 int mask = left | right;

 // Clear i through j, then put m in there
 return (n & mask) | (m << i);
}
int main()
{
	unsigned int M = 2081;
	unsigned int N = 10;
	int i = 2;
	int j = 6;
	unsigned int mask = N;
	mask = mask<<i;
	printf("%d",mask);
	int it;
	unsigned int res = M;
	for(it=i;it<=j;it++)
	{
		if((mask&(1<<it))!=0)
		{
			res = res|(1<<it);
		}
		else
		{
			res = res&(~(1<<it));
		}
	}
	printf("\n%u",res);
	res = updateBits(M,N,i,j);
	printf("\n%u",res);
	return 0;
}
