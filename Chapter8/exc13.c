#include <stdio.h>

int main(void){
    /* I only care about the first letter, then as soon as there is a space, I print until a new line using the getchar() idiom */
    char first, last_ch;
    char last[20];
    int idx = 0;
    int length = 0;

    printf("Enter a first and last name: ");

    /* find first letter and store in first*/
    while((first = getchar()) == ' '){
        ;
    }
    
    /* find the first space between first and last names */
    while((last_ch = getchar()) != ' '){
        ;
    }

    /* find start of last name*/
    while((last_ch = getchar()) == ' '){
        ;
    }

    /* dont forget to store first character found */
    last[idx] = last_ch;
    idx++;

    /* print until end of input, if space found terminate loop before printing extra spaces*/
    while ((last_ch = getchar()) != '\n'){
        if (last_ch == ' ') break;
        last[idx] = last_ch;
        idx++;
    }

    for (int i = 0; i < idx; i++){
        printf("%c", last[i]);
    }

    printf(", ");
    putchar(first);
    printf(".");
    return 0;
}
