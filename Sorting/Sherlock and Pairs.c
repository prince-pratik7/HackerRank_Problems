#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t; scanf("%d",&t);
    while(t--)
        {
        int n; scanf("%d",&n);
        int i,b[1000001]={0};
        for(i=0;i<n;i++)
            {
            int c; scanf("%d",&c);
            b[c]++;
            }
        long long int sum=0;
        for(i=1;i<1000001;i++)
            {
            if(b[i]>1)
            {
            sum+=(long long int)(long long int)(((long long int)b[i]*(long long int)(b[i]-1)));
            }
        }
         printf("%lld\n",sum);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
