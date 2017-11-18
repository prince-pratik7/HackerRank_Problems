#include<stdio.h>
#include<stdio.h>

main()
{
    int t;
    scanf("%d",&t);
    int count[t],len[t];
    int i,k;
    for(i=0;i<t;i++)
    {
        char str[10000];
        count[i]=0;
        scanf("%s",str);
        len[i]=strlen(str);
        for(k=0;k<(len[i]/2);k++)
        {
            while(str[k]!=str[len[i]-k-1])
            {
                if(str[k]>str[len[i]-k-1])
                {
                    str[k]--;
                    count[i]++;
                   // printf("%c\n",str[k]);
                }
                else
                {
                    str[len[i]-k-1]--;
                    count[i]++;
                    //printf("%c\n",str[len[i]-k-1]);
                }
            }
        }
    }
    for(i=0;i<t;i++)
    {
        printf("%d\n",count[i]);
    }
}
