#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int k,n,*data;
    scanf("%d %d",&k,&n);
    data=(int*)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++)
        {scanf("%d",&data[i]);}
    for(int i=0;i<n;i++)
        {
        if(data[i]==k)
        {
            printf("%d",i);
            break;
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
