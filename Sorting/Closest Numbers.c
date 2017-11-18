#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void quick(long long int *data,long int n)
    {
    int i,j,p,t;
    if(n<2)
        return;
    p=data[n/2];
    for(i=0,j=n-1;;i++,j--)
        {
        while(data[i]<p)
            i++;
        while(p<data[j])
            j--;
        if(i>=j)
            break;
        t=data[i];
        data[i]=data[j];
        data[j]=t;
    }
    quick(data,i);
    quick(data+i,n-i);
}
int main() {
    long int i,j;
    long long int *data,min=1000000;
    long int n;
    
    scanf("%ld",&n);
    data=(long long int*)malloc(sizeof(long long int)*n);
    for(i=0;i<n;i++)
        {
        scanf("%lld",&data[i]);
        }
    quick(data,n);
    for(i=0;i<n-1;i++)
        {
        if(data[i+1]-data[i]<min)
        {
            min=data[i+1]-data[i];
        }
        else
            ;
    }
    for(i=0;i<n-1;i++)
        {
        if(data[i+1]-data[i]==min)
            {
            printf("%lld %lld ",data[i],data[i+1]);
            }
        else
            ;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
