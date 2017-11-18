#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int t;
    scanf("%d",&t);
    unsigned long long int x,y,z,b,w;
    int i;
    unsigned long long int e[t];
    for(i=0;i<t;i++)
    {
        e[i]=0;
        scanf("%llu%llu%llu%llu%llu",&b,&w,&x,&y,&z);
        //if((x+z>=y)&&(y+z>=x))
          //  e[i]=b*x+w*y;
        if(x+z<y)
            e[i]=w*(x+z)+b*x;
        else if(y+z<x)
            e[i]=(y+z)*b+w*y;
        else
            e[i]=b*x+w*y;
    }
    for(i=0;i<t;i++)
    {
        printf("%llu\n",e[i]);
    }
}
