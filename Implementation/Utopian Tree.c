#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int n,l,h=1,k,m,p;
   scanf("%d",&m);
   int g[m];
   
   for(p=0;p<m;p++)
    {
        scanf("%d",&n);
        
        for(l=0;l<n+1;l++)
        {
            if(l==0)
            {
                h=1;
            }
                
            else if ((l%2)==1)
            {
                h=2*h;
            }

            else
                h=h+1;
                
        }
        g[p]=h;
   }

   for(p=0;p<m;p++)
   {
       printf("%d\n",g[p]);
   }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
