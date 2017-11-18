/*Given an array of integers, calculate which fraction of the elements are positive, 
negative, and zeroes, respectively. Print the decimal value of each fraction.*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,d;
    float m,n,o,p=0,q=0,r=0;
    scanf("%d",&d);
    int j[d];
    
    for(a=0;a<d;a++)
        {
        scanf("%d",&j[a]);
        }
    for(a=0;a<d;a++)
        {
        if(j[a]>0)
            {
            p=p+1;
            }
        else if(j[a]<0)
            {
            q=q+1;
            }
        else
        r=r+1;
        }
    m=p/d;
    n=q/d;
    o=r/d;
           
    printf("%f\n",m);
    printf("%f\n",n);
    printf("%f\n",o);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
