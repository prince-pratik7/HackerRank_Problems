#include<stdio.h>

int main()
{
    long long int i,n;
    long long int j=0,t;
    scanf("%lld",&t);
    long long int a[t],b[t];
    for(j=0;j<t;j++)
    {
        a[j]=-1;
        b[j]=-1;
        scanf("%lld",&n);
            for(i=0;i<n;i++)
            {
    
                if(((n-5*i)%3)==0 && (n-5*i)>=0)
                {
                    a[j]=5*i;
                    b[j]=n-5*i;
                }
                else if(((n-3*i)%5)==0 && (n-3*i)>=0)
                {
                    b[j]=3*i;
                    a[j]=n-3*i;
                }
                else
                {
                    if(a[j]==-1 && b[j]==-1)
                        {
                        a[j]=-1;
                        b[j]=-1;
                        }
                    else
                        ;
                }
            }
    }
    for(j=0;j<t;j++)
    {
        if((a[j]!=-1) && (b[j]!=-1))
        {
            
            for(i=0;i<b[j];i++)
            {
                printf("5");
            }
            for(i=0;i<a[j];i++)
            {
                printf("3");
            }
        }
        else
            printf("-1");
        printf("\n");
    }
}
