#include<stdio.h>
#include<string.h>
#include<stdlib.h>

main()
{
    int t;
    scanf("%d",&t);
    int len[t],s[t];
    int i;
    for(i=0;i<t;i++)
    {
        char str[10000]={'\0'},strr[10000]={'\0'};
        scanf("%s",str);
        len[i]=strlen(str);
        int k;
        s[i]=5;
        for(k=0;k<len[i];k++)
        {
            strr[k]=str[len[i]-k-1];
        }
        for(k=0;k<len[i]-1;k++)
        {
        	/*if(str[k+1]-str[k]<0)
            {
                (str[k+1]-str[k]) = 0-(str[k+1]-str[k]);
            }
            else
                ;

            if(strr[k+1]-strr[k]<0)
            {
                (strr[k+1]-strr[k]) = 0-(strr[k+1]-strr[k]);
            }
            else
                ;*/

            if(abs(str[k+1]-str[k])==abs(strr[k+1]-strr[k]))
            {
                if(s[i]==1)
                {
                    s[i]=1;
                }
                else
                    s[i]=0;
            }
            else
                s[i]=1;
        }
    }
    for(i=0;i<t;i++)
    {
        if(s[i]==1)
        {
            printf("Not Funny\n");
        }
        else
            printf("Funny\n");
    }
}
