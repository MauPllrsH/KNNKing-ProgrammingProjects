#include <stdio.h>

int main(void){
    for (int i = 1; i <= 128; i *= 2){
        printf("%d ", i);
    }
    printf("\n");
    for (int i = 9384; i > 0; i /= 10){
        printf("%d ", i);
    }
    printf("\n");
    int i = 10;
    while (i >= 1){
        printf("%d ", i++);
        i /= 2;
        if (i == 1) {printf("%d BREAKING INFINITE LOOP", i); break;}
    }

    /*12 Prime Loop*/
    int n;
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);
    for (int d = 2; d*d <= n; d++){
        if (n % d == 0){
            printf("%d is not prime.\n", n);
            break;
        }
    }
    return 0;
}
