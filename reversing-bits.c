//reversing bits in a number

#include<stdio.h>
#include<stdlib.h>

unsigned int reverse_n_byte(unsigned int num)
{
	unsigned int rev=0;
	char* n1 = (char*)&num;
	char* n2 =(char*)&rev;
	
	*(n2+0) = *(n1+3);
	*(n2+1) = *(n1+2);
	*(n2+2) = *(n1+1);
	*(n2+3) = *(n1+0);
	
	return rev;
}

unsigned int reverse(unsigned int num)
{
	unsigned int numofbits = sizeof(num)*8;
	unsigned int r = 0;
	int i;
	for(i=0;i<numofbits;i++)
	{
		if(num&(1<<i))
			r = r|(1<<(numofbits-1-i));
	}
	return r;
}

void printbits(unsigned int num)
{
	int numofbits = sizeof(num)*8;
	
	int i;
	
	for(i=numofbits-1;i>=0;i--)
	{
		if(num&1<<i)
			printf("1");
		else
			printf("0");
	}
	printf("\n");
}

int main()
{
	unsigned int a = 1;
	unsigned int r ;
	r = reverse(a);
	printbits(r);
	printf("%u\n",r);
	unsigned int n = 0xffffabab;
	printf("%x\n",n);
	unsigned int rx = reverse_n_byte(n);
	printf("%x\n",rx);
	return 0;
}
