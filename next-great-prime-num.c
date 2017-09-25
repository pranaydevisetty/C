int prime(int n){
    int i=2,flag=0,j;
    j = n+1;
    while(i<j)
    {
    	if(j%i == 0)
    	{
    		j++;
    		i=2;
    		continue;
		}
		i++;
	}
    
    return j;
}
 
 
int main(){
    int n,i;
    scanf("%d",&n);
    printf("%d",prime(n));
    return 0;
 
}
