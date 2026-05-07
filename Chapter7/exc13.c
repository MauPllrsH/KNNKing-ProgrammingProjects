#include <stdio.h>

int main(void){
    float total_length = 0, word_count = 1;
    char letter;

    printf("Enter a sentence: ");

    while ((letter = getchar()) != '\n'){
        if (letter == ' '){
            word_count++;
        }
        else {
            total_length++;
        }
    }

    printf("Average word length: %.1f\n", total_length / word_count);

    return 0;
}
