#include<stdio.h>
#include<stdlib.h>

int main()
{
	int k;
    long long int n,i;
	scanf("%lld",&n);
    int count[100]={0,};
	int data[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&data[i]);	
	
        for(k=0;k<100;k++)
	   {
            //count[k]=0;
            if(data[i]==k)
			{
                count[k]++;
            }
            else
                ;
		}
	}
	for(k=0;k<100;k++)
	{
		printf("%d ",count[k]);
	}
}