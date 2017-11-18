#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

char words[][21] = {"o' clock", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty"};

int main() {

    int minutes, hours;
    int half = 0; //0 if minutes are less than 30, 1 if greater than 30
    scanf("%d %d", &hours, &minutes);
    
    if (minutes > 30) {
        minutes = 60-minutes; //to account for the "To"
        half = 1;
    }
    
    if (minutes < 21 && minutes != 15 && minutes != 0 && minutes != 1) {
        printf("%s minutes ", words[minutes]);
    }
    else if (minutes == 1) {
        printf("%s minute ", words[minutes]);
    }
    else if (minutes > 20 && minutes < 30) {
        printf("%s %s minutes ", words[20], words[minutes-20]);
    }
    else if (minutes == 15) {
        printf("quarter ");
    }
    else if (minutes == 30) {
        printf("half ");
    }
    
    if (half && minutes != 0) {
        printf("to %s", words[hours+1]);
    }
    else if (!half && minutes != 0){
        printf("past %s", words[hours]);
    }
    else {
        printf("%s %s", words[hours], words[0]);
    }
            
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
