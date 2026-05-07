#include <stdio.h>

int main(void){

    /*
    List of max factorials that can get calculated based on type:
    - short = 8
    - int = 12
    - long = 20
    - long long = 20
    - float = 34 - then inf
    - double = 170 - then inf
    - long double = 
    */
    long double factorial = 1;
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    for (long double i = 1; i <= num; i++){
        factorial *= i;
    }

    printf("Factorial of %d: %Lf\n", num, factorial);
    return 0;
}
