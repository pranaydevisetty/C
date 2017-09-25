#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	int i;
	printf("n=");
	scanf("%d",&n);
	int a[n];
	//printf("%d",sizeof(a));
	for(i=0;i<n;i++)
	{
		//printf("%d\n",i);
		scanf("%d",&a[i]);
	}
	int j,max=0,max1;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			max1=a[i]-a[j];
			if(max1<0)
			 max1=-max1;
			if(max<max1)
				max=max1;
		}
	}
	printf("max-difference=%d",max);
	return 0;
}
