#include <stdio.h>

int main(void){
    int num1, denom1, num2, denom2;
    char operation;

    printf("Enter operation: ");
    scanf("%d/%d", &num1, &denom1);
    operation = getchar();
    scanf("%d/%d", &num2, &denom2);

    switch(operation){
        case '+':
            printf("%d/%d", ((num1 * denom2) + (num2 * denom1)), denom1 * denom2); break;
        case '-':
            printf("%d/%d", ((num1 * denom2) - (num2 * denom1)), denom1 * denom2); break;
        case '*':
            printf("%d/%d", num1 * num2, denom1 * denom2); break;
        case '/':
            printf("%d/%d", num1 * denom2, num2 * denom1); break;
        default:
            printf("[-] Invalid operation!\n");
    }
    return 0;
}
