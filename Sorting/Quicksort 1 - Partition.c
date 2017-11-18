#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

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
 
int main()
{
    int i,n, *data;
    scanf("%d",&n);
    //To increase the efficiency of command execution dynamic memory is allocated
    data=(int*)malloc(sizeof(int)*n);

    for(i=0;i<n;i++)
    {
        //data[i]=rand()%1000;
        /*printf("data[%d]: ",i);*/
        scanf("%d",&data[i]);
    }
    //Quick Sorting Function is used and result is displayed on the screen
    quick_sort(data,n);
    for(i=0;i<n;i++)
    {
        printf("%d ",data[i]);
    }
    printf("\n");
    return 0;
}