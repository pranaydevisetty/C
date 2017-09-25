#include "stringcompare.h"

int StringCompare(char *s1,char *s2)
{
	int i=0;//entry
	while(s1[i]==s2[i]&&s2[i]!='\0')//cond1 ,//cond2
	{
		i++;//body
	}
	if(s1[i]<s2[i])//if
	{
		return -1;			//then1
	}
	else if(s1[i]>s2[i])//else-if
	{
		return 1;	//then2
	}
	else//else
	{
		return 0;
	}
}
