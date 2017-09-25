int removeElement(int* nums, int numsSize, int val) 
{
    int i;
    int c = numsSize;
    int j = 0;
    for(i=0;i<numsSize;i++)
    {
        if(nums[i]==val)
        {
             c--;
        }
        else{nums[j] = nums[i] ;j++;}
    }
    return c;
}
int main()
{
	int a[] = {1,2,3,4,4,5,4,4}; int s = sizeof(a)/sizeof(a[0]); int i;
	int c = removeElement(a,s,4);
	for(i=0;i<c;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
