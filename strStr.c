//Implement strStr().
//Returns the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.
#include<stdio.h>
#include<string.h>
int strStr(char* haystack, char* needle) 
{
    if(*needle=='\0')
        return 0;
    int i,j=0,k=0;
    char n[strlen(needle)+1];
    for(i=0;strlen(haystack)-i>=strlen(needle);i++)
    {
        memcpy(n,haystack+i,strlen(needle));n[strlen(needle)] = '\0';
        if(strcmp(needle,n) == 0)
            return i;
    }
    return -1;
}
int main()
{
	printf("%d",strStr("haystackneedle","needle"));
	return 0;
}
