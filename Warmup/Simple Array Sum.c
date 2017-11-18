//You are given an array of integers of size N. Can you find the sum of the elements in the array?
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b,d;
    long long int c=0;
    scanf("%d",&a);
    int m[a];
    for(b=0;b<a;b++)
        {
        scanf("%d",&m[b]);
        }
    for(b=0;b<a;b++)
        {
        c=c+m[b];
        }
   printf("%lli",c);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
