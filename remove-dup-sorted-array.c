//remove-duplicates-in-sorted-array.
#include<stdio.h>
#include<stdlib.h>
//*
int removeDuplicates(int* nums, int numsSize) 
{
    if(numsSize==0)
        return 0;
    int x = nums[0];int s = 1,j=1;int i;
    for(i=1;i<numsSize;i++)
    {
        if(x==nums[i])
            continue;
        nums[j]=nums[i];
        x = nums[i];
        j++;s++;
    }
    return s;
}
//*/
/*
int removeDuplicates(int* nums, int numsSize) 
{
int count = 0;
int i;
for( i = 1; i <numsSize; i++)
{
    if(nums[i] == nums[i-1]) count++;
    else nums[i-count] = nums[i];
}
    return numsSize-count;
}
*/
int main()
{
	int a[5] = {1,1,2,2,3};int i;
//	printf("%d\n",removeDuplicates(a,sizeof(a)/sizeof(a[0])));
	int n = removeDuplicates(a,sizeof(a)/sizeof(a[0]));
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
