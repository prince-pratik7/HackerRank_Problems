/*
Given a time in AM/PM format, convert it to military (24-hour) time.
Note: Midnight is 12:00:00 AM on a 12-hour clock and 00:00:00 on a 24-hour clock. Noon is 12:00:00 PM on a 12-hour clock and 
12:00:00 on a 24-hour clock. 
*/

#include<stdio.h>
#include<math.h>
#include<string.h>
int main() {
    int hh, mm, ss ;
    char t12[2];
    scanf("%d:%d:%d%s", &hh, &mm, &ss, t12) ;

    if (strcmp(t12,"PM")==0 && hh!=12) hh += 12 ;
    if (strcmp(t12,"AM")==0 && hh==12) hh = 0 ;

    printf("%02d:%02d:%02d", hh, mm, ss) ;
    return 0;
}
