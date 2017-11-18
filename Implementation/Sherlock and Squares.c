#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    int t;
    scanf("%d",&t);
    int i;
    unsigned long long int a,b,p;
    int count[t];
    for(i=0;i<t;i++)
    {
        count[i]=0;
        scanf("%llu %llu",&a,&b);
        for(p=(int)(sqrt(a));p<((int)(sqrt(b))+1);p++)
        {
            if(p*p>=a && p*p<=b)
            {
                count[i]++;
            }
            else
                ;
        }
    }
    for(i=0;i<t;i++)
    {
        printf("%llu\n",count[i]);
    }
}
