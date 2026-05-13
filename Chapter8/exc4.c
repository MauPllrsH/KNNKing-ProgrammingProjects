#include <stdio.h>

#define N (int) (sizeof(a) / sizeof(a[0]))

int main(void){
    int n, i;

    printf("How many numbers are you going to enter? ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d numbers: ", N);
    for (i = 0; i < N; i++){
        scanf("%d", &a[i]);
    }

    printf("In reverse order:");
    for (i = N - 1; i >= 0; i--){
        printf(" %d", a[i]);
    }
    printf("\n");
    return 0;
}
