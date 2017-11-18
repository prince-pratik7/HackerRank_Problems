/*Given a square matrix of size N×N, calculate the absolute difference between the sums of its diagonals.*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,j,n,z,k=0,l=0;
    scanf("%d",&n);
    int a[n][n];

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }

    for(i=0;i<n;i++)
    {
    k=k+a[i][i];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i+j==n-1)
            {
                l=l+a[i][j];
            }
            else
                l=l;
        }
    }

    z=l-k;
    if(z<0)
    {
        z=-z;
    }
    else
        z=z;

    printf("%d",z);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
