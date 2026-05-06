#include <stdio.h>

int main(void){
    int days, start;
    printf("Enter number of days in the month: ");
    scanf("%d", &days);

    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &start);

    for(int i = 0; i < start - 1; ++i)
        printf("   ");

    for (int i = 1; i <= days; ++i){
        if((i + start) % 7 == 2){
            printf("\n");
        }
        printf("%2d ", i);
    }
    return 0;
}
