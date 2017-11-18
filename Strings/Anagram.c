#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d",&t);
    int i,l[t];
    for(i=0;i<t;i++)
        {
        l[i]=0;
        char s[10000]={'\0'};
        scanf("%s",s);
        int c[2][26]={0,};
        if(strlen(s)%2==0)
            {
            for(int k=0;k<strlen(s)/2;k++)
                {
                c[0][s[k]-'a']++;
                }
            for(int k=strlen(s)/2;k<strlen(s);k++)
                {
                c[1][s[k]-'a']++;
                }
            for(int k=0;k<26;k++)
                {
                while(c[0][k]!=c[1][k])
                    {
                    if(c[0][k]>c[1][k])
                        {
                        c[1][k]++;
                        l[i]++;
                        }
                    else
                    {
                        c[0][k]++;
                        l[i]++;
                    }
                }
            }
            l[i]/=2;
            }
        else
            l[i]=-1;
        }
    for(i=0;i<t;i++)
        {printf("%d\n",l[i]);}

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
