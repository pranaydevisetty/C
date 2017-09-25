#include<stdio.h>
#include<stdlib.h>
//You are climbing a stair case. It takes n steps to reach to the top.
//
//Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?
//
//Note: Given n will be a positive integer.


int climbStairs(int n) 
{
    int a = 1, b = 1;
    while (n--)
        a = (b += a) - a;
    return a;
}

int main()
{
	printf("%d\n",climbStairs(44));
	return 0;
}

