#include <stdio.h>
#include <ctype.h>

int main(void){
    /*
    1  = A E I L N O R S T U 
    2  = D G
    3  = B C M P 
    4  = F H V W Y
    5  = K 
    8  = J Q X
    10 = Z
    */
    int values[26] = {
        1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10
    };
    char ch;
    int value = 0;

    printf("Enter a word: ");

    while ((ch = getchar()) != '\n'){
        ch = toupper(ch);
        value += values[ch - 'A'];
    }

    printf("Scrabble value: %d", value);
    return 0;
}
