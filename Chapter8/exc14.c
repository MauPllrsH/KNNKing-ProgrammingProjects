#include <stdio.h>
#include <ctype.h>

int main(void){
    char sentence[100];
    int idx = 0, length = 0;
    char ch, terminating;

    printf("Enter a sentence: ");

    while(idx < 100){
        ch = getchar();
        if (ch == '!' || ch == '?' || ch == '.'){
            terminating = ch;
            break;
        }
        sentence[idx] = ch;
        idx++;
    }

    printf("Reversal of sentence: ");
    length = idx;

    while (idx >= 0){
        if (sentence[idx] == ' '){
            for (int i = idx + 1; i < length; i++){
                if (sentence[i] == ' '){
                    break;
                }
                printf("%c", sentence[i]);
            }
            printf(" ");
        }
        idx--;
    }

    /* print last word since first word has no preceding space*/
    for (int i = 0; i < length; i++){
        if (sentence[i] == ' '){
            break;
        }
        printf("%c", sentence[i]);
    }
    printf("%c\n", terminating);

    return 0;
}
