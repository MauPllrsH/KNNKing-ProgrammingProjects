#include <stdio.h>

int main(void){
    float total, operand;
    char operator;
    _Bool check = 0;

    printf("Enter an expression: ");

    scanf("%f", &total);

    while ((operator = getchar()) != '\n'){
        scanf("%f", &operand);
        switch(operator){
            case '+':
                total += operand;
                break;
            case '-':
                total -= operand;
                break;
            case '/':
                if (operand == 0){ printf("[-] Division by 0 not allowed!\n"); check = 1; break;}
                total /= operand;
                break;
            case '*':
                total *= operand;
                break;
        }
    }

    if (!check){
        printf("Value of expression: %.1f\n", total);
    }
    return 0;
}
