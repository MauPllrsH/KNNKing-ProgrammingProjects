#include <stdio.h>
#include <stdbool.h>

int main(void){
    int occurrences[10] = {0};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0){
        digit = n % 10;
        occurrences[digit]++;
        n /= 10;
    }

    printf("Digit:\t\t");
    for (int i = 0; i < 10; i++)
        printf("%3d", i);
    
    printf("\nOccurrences:\t");
    for (int i = 0; i < 10; i++)
        printf("%3d", occurrences[i]);
    
    printf("\n");

    return 0;
}
