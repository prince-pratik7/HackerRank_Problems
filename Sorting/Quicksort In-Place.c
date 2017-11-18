#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int n;
void quicksort(int x[],int first,int last){
    int tmp,i,j,k;
     if(first<last)
     {
     for(i=first,j=first;i<=last;i++)
        if(x[i]<=x[last])
     {
         tmp=x[j];
         x[j]=x[i];
         x[i]=tmp;
         j++;
     }
         for(k=0;k<n;k++)
            printf("%d ",x[k]);
         printf("\n");
         quicksort(x,first,j-2);
         quicksort(x,j,last);
     }
}

int main()
 {
   int i;
   scanf("%d",&n);
   int A[n];
   for(i=0;i<n;i++)
    scanf("%d",&A[i]);
   quicksort(A,0,n-1);
    return 0;
}