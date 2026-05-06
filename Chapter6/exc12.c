#include <stdio.h>

int main(void){
    float factorial, epsilon, e;
    int i;
    
    printf("Enter n: ");
    scanf("%f", &epsilon);

    e = 1;
    factorial = 1;
    i = 1;
    while (1){
        factorial *= i;
        if (1 / factorial < epsilon) break;
        e += 1 / factorial;
        ++i;
    }
    printf("Found term = 1/%d!\n", i - 1);
    printf("e = %f", e);
    return 0;
}
