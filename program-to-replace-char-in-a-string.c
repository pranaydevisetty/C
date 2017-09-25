#include<stdio.h>
#include<stdlib.h>
//Program to replace a character in a string or character array
int main()
{
	//char *c ="Hello" --> string stored in read only memory into data section, which is directly copied to the executable by the compiler
	char c[6]="Hello"; // string stored in stack memory.
	char d= 'I';
	c[0]=d;
	printf("%s",c);
	return 0;
}
