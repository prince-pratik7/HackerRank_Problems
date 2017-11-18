#include<stdio.h>

typedef struct{
    int d;
    int m;
    long int y;
}date;

main()
{
    date t[2];
    int i;
    long int s;

    for(i=0;i<2;i++)
    {
        scanf("%d%d%ld",&t[i].d,&t[i].m,&t[i].y);
    }
    if((t[0].y==t[1].y)&&(t[0].m==t[1].m))
    {
        if(t[0].d>t[1].d)
        {
            s=15*(t[0].d-t[1].d);
        }
        else
            s=0;
    }
    else if((t[0].y==t[1].y)&&(t[0].m!=t[1].m))
    {
        if(t[0].m>t[1].m)
        {
            s=500*(t[0].m-t[1].m);
        }
        else
            s=0;
    }
    else if(t[0].y!=t[1].y)
    {
        if(t[0].y>t[1].y)
        {
            s=10000;
        }
        else
            s=0;
    }
    printf("%ld",s);
}
