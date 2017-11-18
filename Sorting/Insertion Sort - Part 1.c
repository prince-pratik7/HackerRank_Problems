#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
void insertion_sort(int i,int *data,int size)
{
    int l;
    if(i<size)
    {
        int j;
        int temp=data[i];
        for(j=i;j>0 && data[j-1]>temp;j--)
        {
            data[j]=data[j-1];
            for(l=0;l<size;l++)
                {
                printf("%d ",data[l]);
                }
            printf("\n");
        }
        data[j]=temp;
        insertion_sort(++i,data,size);
    }
}
int main()
{
    int i,n=1000, *data;
    scanf("%d",&n);
    //To increase the efficiency of command execution dynamic memory is allocated
    data=(int*)malloc(sizeof(int)*n);

    for(i=0;i<n;i++)
    {
        //data[i]=rand()%1000;
        /*printf("data[%d]: ",i);*/
        scanf("%d",&data[i]);
    }
	//Insertion Sorting Function is used and result is displayed on the screen
    insertion_sort(0,data,n);
    for(i=0;i<n;i++)
    {
        printf("%d ",data[i]);
    }
    printf("\n");
    return 0;
}