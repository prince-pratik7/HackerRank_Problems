#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long int count[2][26]={0,};
    char s1[10000]={0,},s2[10000]={0,};
    scanf("%s %s",s1,s2);
    int l=0;
    for(int i=0;i<strlen(s1);i++)
        {
        if(s1[i]>='a' && s1[i]<='z')
            count[0][s1[i]-'a']++;
        else if(s1[i]>='A' && s1[i]<='Z')
            count[0][s1[i]-'A']++;
    }
    for(int i=0;i<strlen(s2);i++)
        {
        if(s2[i]>='a' && s2[i]<='z')
            count[1][s2[i]-'a']++;
        else if(s2[i]>='A' && s2[i]<='Z')
            count[1][s2[i]-'A']++;
        }
    for(int i=0;i<26;i++)
    {
        while(count[0][i]!=count[1][i])
        {
            if(count[0][i]>count[1][i])
            {
                count[0][i]--;
                l++;
            }
            else
            {
                count[1][i]--;
                l++;
            }
          }
    }
    printf("%d",l);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
