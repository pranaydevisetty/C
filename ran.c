#include<stdio.h>
#include<stdlib.h>


char* addBinary(char* a, char* b) 
{
    int count = 0; 
        int i=strlen(a)-1,j=strlen(b)-1;int k; 
        if(i>=j) 
            k = i+3;
        else 
            k = j+3;
        char* res = (char*)malloc(k);
        res[k-1] = '\0';
        k=k-2;
        while(i>=0||j>=0||count>0)
        {
            if(i>=0&&a[i]=='1')
                count++;
            if(j>=0&&b[j]=='1')
                count++;
            //printf("%d\n",k);
            if(k>=0)
            {
                res[k] = (count%2)+'0';
            }
            count = count/2;
            i--;j--;
            //printf("%c\n",res[k]);
            k--;
        }
        k = -1;
        //printf("%s",res);
        while((*(res+k+1) =='0'||*(res+k+1) =='\0')&&(k!=strlen(res)-2) )
        {
            k++;
       }
        return res+k+1;
}
int main()
{
	printf("%s",addBinary("0","0"));
	return 0;
}
