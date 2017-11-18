#include <stdio.h>  
#include <string.h>  
#include <math.h>  
#include <stdlib.h>  
#define MAX 1000000  
  
int ispalindrome(char *s)  
    {  
    int l=0;  
    int r=strlen(s)-1;  
    while(l<r)  
        {  
        if(*(s+l)!=*(s+r))  
            return 0;  
        l++;  
        r--;  
    }  
    return 1;  
}  
  
int removechar(char *s,int index)  
    {  
    char *v;  
    int i=0,j=0;  
    v=(char*)malloc(sizeof(char)*MAX);  
    while(*(s+i))  
        {  
        if(i==index)  
            {  
            /*if(j>0) 
                j--; 
            continue;*/  
            i++;  
        }  
        else  
            {  
            v[j]=s[i];  
            i++;  
            j++;  
        }  
    }  
    v[j]='\0';  
    if(ispalindrome(v))  
        return 1;  
    else  
        return 0;  
}  
  
int main() {  
  
    int t,l,r;  
    char *s;  
    s=(char*)malloc(sizeof(char)*MAX);  
    scanf("%d",&t);  
    while(t--)  
        {  
        scanf("%s",s);  
        l=0;  
        r=strlen(s)-1;  
        if(ispalindrome(s))  
            {  
            printf("-1\n");  
            continue;  
        }  
        while(l<r)  
            {  
            if(*(s+l)==*(s+r))  
                {  
                l++,r--;  
            }  
            else  
                {  
                //first mismatch  
                if(removechar(s,l))  
                    {  
                    printf("%d\n",l);  
                    break;  
                }  
                else if(removechar(s,r))  
                    {  
                    printf("%d\n",r);  
                    break;  
                }  
            }  
        }  
    }  
    return 0;  
}