#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void quick(int *data,int n)
{
    int i,j,p,temp;
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
        temp=data[i];
        data[i]=data[j];
        data[j]=temp;
    }
    quick(data,i);
    quick(data+i,n-i);
    return;
}
int main() {
    long long int n,i;
    scanf("%lld",&n);
    int *data;
    data=(int*)malloc(sizeof(int)*n);
    
    for(i=0;i<n;i++)
        {
        scanf("%d",&data[i]);
        }
    quick(data,n);
    for(i=0;i<n;i++)
        {printf("%d ",data[i]);}
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
