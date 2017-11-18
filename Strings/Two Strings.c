#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    char s1[100001],s2[100001];
    int len1,len2,t,i,d;
    int hash1[26],hash2[26];
    scanf("%d",&t);
    while(t--)
        {
        d=0;
        memset(hash1,0,sizeof(hash1));
        memset(hash2,0,sizeof(hash2));
        scanf("%s %s",s1,s2);
        len1=strlen(s1);
        len2=strlen(s2);
        for(i=0;i<len1;i++)
            {
            hash1[s1[i]-97]++;
        }
        for(i=0;i<len2;i++)
            {
            hash2[s2[i]-97]++;
        }
        for(i=0;i<26;i++)
            {
                if(hash1[i]!=0 && hash2[i]!=0 )
                    {
                    d=1;
                    break;
                }
        }
        if(d==1)
            {
            printf("YES\n");
        }
        else
            {
            printf("NO\n");
        }      
    }
    return 0;
}