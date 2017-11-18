#include<stdio.h>
#include<string.h>

int main()
{
    int t;
    scanf("%d",&t);
    int i,count[t];
    for(i=0;i<t;i++)
    {
        char str[100000];
        scanf("%s",str);
        count[i]=0;
        int len;
        len=strlen(str);
        int k;
        for(k=0;k<len-1;k++)
        {
            if(str[k]==str[k+1])
            {
                count[i]++;
            }
            else
                ;
        }
    }
    for(i=0;i<t;i++)
    {
        printf("%d\n",count[i]);
    }
}
