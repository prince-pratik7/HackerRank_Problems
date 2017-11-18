#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n, table[101] = {0}, num, i, last;
    char str[128];
    
    scanf (" %d", &n);
    for (i=0; i<n; i++)
    {
        scanf (" %d %s", &num, str);
        table[num]++;
    }
    last = 0;
    for (i=0; i<100; i++)
    {
        table[i] += last;
        printf ("%d ", table[i]);
        last = table[i];
    }
    printf ("\n");
    
    return 0;
}
