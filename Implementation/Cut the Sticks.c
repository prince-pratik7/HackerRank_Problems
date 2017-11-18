#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int max=0,i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(max<a[i])
            max=a[i];
        else
            ;
    }
    printf("%d\n",n);
    while(max!=0)
    {
        int min=1001,count=0;
        for(i=0;i<n;i++)
        {
            if(a[i]>0)
            {
                if(min>a[i])
                {
                    min=a[i];
                }
                else
                    ;
            }
            else
                ;
        }
        for(i=0;i<n;i++)
        {
            a[i]-=min;
            max-=min;
            if(a[i]>0)
                count++;
            else
                ;
        }
        if(count>0)
            printf("%d\n",count);
        else
            break;
    }
}
