#include <stdio.h>

int main(void){
    /* I only care about the first letter, then as soon as there is a space, I print until a new line using the getchar() idiom */
    char first, last;

    printf("Enter a first and last name: ");

    /* find first letter and store in first*/
    while((first = getchar()) == ' '){
        ;
    }
    
    /* find the first space between first and last names */
    while((last = getchar()) != ' '){
        ;
    }

    /* find start of last name*/
    while((last = getchar()) == ' '){
        ;
    }

    /* dont forget to print first character found */
    putchar(last);

    /* print until end of input, if space found terminate loop before printing extra spaces*/
    while ( (last = getchar()) != '\n'){
        if (last == ' ') break;
        putchar(last);
    }

    printf(", ");
    putchar(first);
    printf(".");
    return 0;
}
