#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

/* Head ends here */
void quickSort(int ar_size, int *  ar) {
    partition(0, ar_size, ar);
}

void partition(int begin, int end_pp, int *  ar) {
    int insert;
    int pivot = begin;
    for (int i=pivot+1; i<end_pp; i++) {
        if (ar[i] < ar[pivot]) {
            insert = ar[i];
            for(int j=i; j>pivot; j--) {
                ar[j] = ar[j-1];
            }
            ar[pivot] = insert;
            pivot++;
        }
    }
    if (pivot - begin > 1) {
        partition(begin, pivot, ar);
    }
    if (end_pp - pivot > 2) {
        partition(pivot+1, end_pp, ar);
    }
    print_array(begin, end_pp, ar);
}

void print_array(int begin, int end_pp, int *  ar) {
    printf("%d", ar[begin]);
    for (int i=begin+1; i<end_pp; i++) {
        printf(" %d", ar[i]);
    }
    puts("");
}

/* Tail starts here */
int main() {
   
   int _ar_size;
scanf("%d", &_ar_size);
int _ar[_ar_size], _ar_i;
for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) { 
   scanf("%d", &_ar[_ar_i]); 
}

quickSort(_ar_size, _ar);
   
   return 0;
}