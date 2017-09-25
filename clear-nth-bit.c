//clearing a bit at nth position
void clear(int* n,int pos)
{
	*n  = *n &(~(1<<pos));
	
	return n;
}
void set(int* n,int pos)
{
	*n = *n|(1<<pos);
}

void toggle(int *n,int pos)
{
	*n = *n^(1<<pos);
}
int main()
{
	int n = 1;
	clear(&n,1);
	printf("%d\n",n);
	set(&n,1);
	printf("%d\n",n);
	n = 2;
	toggle(&n,1);
	printf("%d\n",n);
	return 0;
}
