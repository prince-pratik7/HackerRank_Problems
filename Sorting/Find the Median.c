#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int i, *data;
    long int n;
    scanf("%ld",&n);
    
    //To increase the efficiency of command execution dynamic memory is allocated
    data=(int*)malloc(sizeof(int)*n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&data[i]);
    }
    quick_sort(data,n);
    printf("%d",data[n/2]);
}

void quick_sort (int *data, int n) 
{
    int i, j, p, t;
    if (n < 2)
        return;
    p = data[n / 2];
    for (i = 0, j = n - 1;; i++, j--) {
        while (data[i] < p)
            i++;
        while (p < data[j])
            j--;
        if (i >= j)
            break;
        t = data[i];
        data[i] = data[j];
        data[j] = t;
    }
    quick_sort(data, i);
    quick_sort(data + i, n - i);
    return;
}