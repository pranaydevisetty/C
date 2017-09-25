//Given an array with duplicates...
//firstly I will sort the array and i will iterate the array startng from the first element and compare that element 
//with the elemnts that followed by it. if any element is found to be equal slide in the elements by resizing the array.

// reference:http://www.c4learn.com/c-programs/to-delete-duplicate-elements-in-array.html

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,i;
	printf("n= ");
	
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	int dup[1000];
	for(i=0;i<1000;i++)
	{
		dup[i]=0;
	}
	
	for(i=0;i<n;i++)
	{		
		dup[a[i]]++;
	}
	
	for(i=0;i<1000;i++)
	{
		if(dup[i]>1)
		{
			printf("%d",i);
		}
	}
	
	return 0;
}
