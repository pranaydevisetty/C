//print bits

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
}

int main()
{
	int a = 5;
	
	printbits(a);
	
	return 0;
}

