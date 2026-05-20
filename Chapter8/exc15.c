#include <stdio.h>
#include <ctype.h>

#define SIZE 80

int main(void){
    char original[SIZE], encrypted[SIZE];
    int shift, idx = 0;
    char ch;

    printf("Enter a message to be encrypted: ");

    while((ch = getchar()) != '\n' && idx < 80){
        original[idx] = ch;
        idx++;
    }

    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift);

    for(int i = 0; i < SIZE; i++){
        ch = original[i];
        if(ch >= 65 && ch <= 90){ /*Uppercase*/
            encrypted[i] = ((ch - 'A') + shift) % 26 + 'A';
        }
        else if(ch >= 97 && ch <= 122){ /*Lowercase*/
            encrypted[i] = ((ch - 'a') + shift) % 26 + 'a';
        }
        else{
            encrypted[i] = ch;
        }
    }

    printf("Encrypted message: ");
    for(int i = 0; i < idx; i++){
        printf("%c", encrypted[i]);
    }

    return 0;
}
