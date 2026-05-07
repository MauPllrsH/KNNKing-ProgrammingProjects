#include <stdio.h>
#include <ctype.h>

int main(void){
    int hour, minutes;
    char am_or_pm;

    printf("Enter a 12-hour time: ");
    scanf("%d:%d %c", &hour, &minutes, &am_or_pm);
    am_or_pm = toupper(am_or_pm);

    /* 
    12:00AM -> 00:00 
    12:00PM -> 12:00
    
    */

    if (hour == 12 && am_or_pm == 'P'){
        ;
    }
    else if (hour == 12 && am_or_pm == 'A'){
        hour = 0;
    }
    else if (am_or_pm == 'P'){
        hour += 12;
        if (hour == 24) hour = 0;
    }

    printf("Equivalent 24-hour time: %d:%.2d\n", hour, minutes);
    return 0;
}
