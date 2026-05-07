#include <stdio.h>
#include <ctype.h>

int main(void){
    char ch;
    int vowels = 0;

    printf("Enter a sentence: ");

    while ((ch = getchar()) != '\n'){
        ch = toupper(ch);
        if ( ch == 'A' || ch == 'E' ||ch == 'I' || ch == 'O' ||ch == 'U' ) {
            printf("Found vowel %c\n", ch);
            vowels++;
        }
    }

    printf("Your sentence contains %d vowels", vowels);
    return 0;
}
