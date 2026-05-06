#include <stdio.h>

int main(void){
    float n, largest;

    printf("Enter a number: ");
    scanf("%f", &n);
    largest = n;
    while(n > 0){
        if(n > largest){
            largest = n;
        }
        printf("Enter a number: ");
        scanf("%f", &n);
    }
    printf("The largest number is: %.2f\n", largest);
    return 0;
}
