#include <stdio.h>
#include <stdbool.h>

int main(void){
    bool digit_seen[10] = {false};
    bool repeats[10] = {false};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    printf("Repeated digit(s):");
    while (n > 0){
        digit = n % 10;
        if (digit_seen[digit]){
            repeats[digit] = true;
        }
        digit_seen[digit] = true;
        n /= 10;
    }

    for (int i = 0; i < 10; i++){
        if (repeats[i]){
            printf(" %d", i);
        }
    }

    printf("\n");

    return 0;
}
