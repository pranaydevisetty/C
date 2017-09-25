#include<stdio.h>
#include<stdlib.h>

int sumofarray(int *a,int n)
{
	static int sum =0;
	if(n<0)
	{
		return 0;
	}
	int t=*a;
	sum=sum+t;
	sumofarray(a+1,n-1);
	return sum;
}

int main()
{
	int array[5]={10,1,2,3,4};
	int s;
	s=sumofarray(array,5);
	printf("%d",s);
	
	return 0;
}
