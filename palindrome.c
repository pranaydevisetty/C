#include<stdio.h>
#include<limits.h>
#include<stdbool.h>
/*
bool isPalindrome(int x) 
{
    if(x>=INT_MAX||x<0)
        return 0;
    int p = x;
    long reverse = 0;
    while(p)
    {   
        reverse = reverse*10+(p%10);
        if(reverse>=INT_MAX)
            return 0;
        p = p/10;
    }
    if(x == reverse)
        return 1;
    return 0;
}*/

bool isPalindrome(int x) {
        if(x<0|| (x!=0 &&x%10==0)) return false;
        int sum=0;
        while(x>sum)
        {
            sum = sum*10+x%10;
            x = x/10;
        }
        return (x==sum)||(x==sum/10);
    }
int main()
{
	printf("%s",isPalindrome(212)?"true":"false");
	return 0;
}
