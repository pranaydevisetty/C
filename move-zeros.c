#include<stdio.h>
#include<stdlib.h>
//Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.
//
//For example, given nums = [0, 1, 0, 3, 12], after calling your function, nums should be [1, 3, 12, 0, 0].
//
//Note:
//You must do this in-place without making a copy of the array.
//Minimize the total number of operations.
void moveZeroes(int* nums, int numsSize) 
{
    int i,j=0,c = 0;
    for(i =0 ;i<numsSize;i++)
    {
        if(nums[i]==0)
        {
            c++;
        }
        else
            nums[j++] = nums[i];
    }
    for(i=numsSize-c;i<numsSize;i++)
    {
        nums[i] = 0;
    }
}

int main()
{
	int nums[] = {0,1,2,0,3,5,0,1,9};
	moveZeroes(nums,(sizeof(nums)/sizeof(nums[0])));
	int i;
	for(i=0;i<(sizeof(nums)/sizeof(nums[0]));i++)
	{
		printf("%d ",nums[i]);
	}
	return 0;
}
