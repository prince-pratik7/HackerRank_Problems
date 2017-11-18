#include<stdio.h>

int main()
{
    int l,k;
    char s[100];
    int i,m;

    scanf("%d %s %d",&l,s,&k);
	m=k%26;
	for(i=0;i<l;i++)
	{
    if(s[i]>='a' && s[i]<='z')
    {
        if(s[i]+m>'z')
        {
        	printf("%c",s[i]+m-26);
        }
        else
        	printf("%c",s[i]+m);
    }
    else if(s[i]>='A' && s[i]<='Z')
    {
    	if(s[i]+m>'Z')
    	{
    		printf("%c",s[i]+m-26);
    	}
    	else
    		printf("%c",s[i]+m);
    }
    else
    	printf("%c",s[i]);
	}  
}          
