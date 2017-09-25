#include<stdio.h>
#include<limits.h>
double myPow(double x, int n) 
{
    double r = 1;double p =x;int i;
    if((n==0||x==1||x==-1)&&(n%2==0))
   {
        printf("%lf\n",x);
        return 1;
   }
    if(n<0)
    {
        n = -n;
        if(n==INT_MIN)
        	n = INT_MAX;
        printf("%lf\n",1/x);
        x =(double)(1/x);
    }
   
    while(n)
    {
        if((n&1))
            r = r*x;
        x =x*x;
        n>>=1;
    }
       return r;
}
int main()
{
	printf("%lf\n",myPow(2.000,2147483647));
	printf("%d",INT_MIN%2);
	return 0;
}
