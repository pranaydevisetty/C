#include "stdio.h"
#include <stdlib.h>
#include <string.h>
int ascitoint(char* str)
{
	int n=0,i;
	int len=strlen(str);
	printf("length=%d",len);
	for(i=0;str[i]!=NULL;i++)
	{
		//printf("str-32:%d",str[i]-'0');
		//printf("0:%d",0);
		if(str[i]=='-')
			continue;
		if(str[i]-'0'<=9&&str[i]-'0'>=0)
		n=n*10+(str[i]-'0');
		else 
			break;
	}
	if(str[0]=='-')
		return -n;

	return n;
}

int main()
{
   int val;
   char str[20];
   
   strcpy(str, "-98993a48");
   val = ascitoint(str);
   printf("String value = %s, Int value = %d\n", str, val);

   strcpy(str,"a9");
   val = ascitoint(str);
   printf("String value = %s, Int value = %d\n", str, val);

   return(0);
}
