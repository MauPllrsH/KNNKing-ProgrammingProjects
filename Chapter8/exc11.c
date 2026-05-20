#include <stdio.h>

int main(void){
    char phone_number[15];
    char ch;
    int idx = 0;

    printf("Enter a phone number: ");

    while ((ch = getchar()) != '\n' && idx < 15){
        switch(ch){
            case 'A': case 'B': case 'C': phone_number[idx] = ('2'); break;
            case 'D': case 'E': case 'F': phone_number[idx] = ('3'); break;
            case 'G': case 'H': case 'I': phone_number[idx] = ('4'); break;
            case 'J': case 'K': case 'L': phone_number[idx] = ('5'); break;
            case 'M': case 'N': case 'O': phone_number[idx] = ('6'); break;
            case 'P': case 'R': case 'S': phone_number[idx] = ('7'); break;
            case 'T': case 'U': case 'V': phone_number[idx] = ('8'); break;
            case 'W': case 'X': case 'Y': phone_number[idx] = ('9'); break;
            default: phone_number[idx] = ch; break;
        }
        idx++;
    }

    for(int i = 0; i < 15; i++){
        printf("%c", phone_number[i]);
    }

    return 0;
}
