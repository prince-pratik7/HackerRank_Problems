#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i=1 , N , K , cases ; 
    scanf("%d",&cases); 
    while(i<=cases) 
    { 
        scanf("%d\t%d",&N,&K); 
        int j=1 , count1=0 , a[N] , count2=0 ; 
        while(j<=N) 
        { 
            scanf("%d",&a[j]); 
            if( a[j]<= 0 ) 
                count1++; 
            else 
                count2++; 
            j++; 
        } 
        if(count1 < K) 
            printf("YES\n"); 
        else if(count1 >= K) 
            printf("NO\n"); i++; 
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
