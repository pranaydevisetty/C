#include<stdio.h>
#include<limits.h>
int reverse(int x) 
{
    if(x>=INT_MAX||x<=INT_MIN)
        return 0;
    int reverse = x;
    long r=0;
    if(reverse<0)
        reverse = -x;
    while(reverse)
    {
        r = r*10+(reverse%10);
        if(r>=INT_MAX)
            return 0;
        reverse = reverse/10;
    }
    if(x<0)
        return -r;
    return r;
}
int main()
{
	//test cases
	printf("%d",reverse(212121));
	return 0;
}
