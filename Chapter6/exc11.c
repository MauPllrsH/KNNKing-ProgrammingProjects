#include <stdio.h>

int main(void){
    float e, factorial;
    int n;
    
    printf("Enter n: ");
    scanf("%d", &n);
    e = 1;
    factorial = 1;
    for (int i = 1; i <= n; ++i){
        factorial *= i;
        e += (1 / factorial);
    }
    printf("e = %.2f", e);
    return 0;
}
