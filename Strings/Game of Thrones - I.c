#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
 
int main() {

    char s[100001]={'\0'};
    scanf("%s",s);
    long long int c[26];
    long long int l=0,k=0;
    for(int i=0;i<100001;i++)
        {
        if(s[i]>='a' && s[i]<='z')
            {
            c[s[i]-'a']++;
            }
        else
            ;
        }
    for(int i=0;i<26;i++)
        {
        if(c[i]%2==0)
            l++;
        else if(c[i]%2==1)
            k++;
        }
    if(l>0 && (k==1 || k==0))
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}