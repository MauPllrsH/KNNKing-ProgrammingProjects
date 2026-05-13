#include <stdio.h>
#include <stdbool.h>

int main(void){
    int digit;
    long n, store;

    printf("Enter a number: ");
    scanf("%ld", &store);

    while(store > 0){
        bool digit_seen[10] = {false};
        n = store;
        while (n > 0){
            digit = n % 10;
            if (digit_seen[digit]){
                printf("Repeat found\n");
                break;
            }
            digit_seen[digit] = true;
            n /= 10;
        }
        printf("Enter a number: ");
        scanf("%ld", &store);
    }

    return 0;
}
