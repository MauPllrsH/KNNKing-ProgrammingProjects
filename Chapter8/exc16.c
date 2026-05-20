#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(void){
    int anagram[26] = {0};
    char ch;
    int idx = 0;
    bool isanagram = true;

    printf("Enter first word: ");
    while((ch = getchar()) != '\n'){
        if (isalpha(ch)){
            ch = tolower(ch);
            idx = ch - 'a';
            anagram[idx]++;
        }
    }

    printf("Enter second word: ");
    while((ch = getchar()) != '\n'){
        if (isalpha(ch)){
            ch = tolower(ch);
            idx = ch - 'a';
            anagram[idx]--;
        }
    }

    for(int i = 0; i < 26; i++){
        if(anagram[i] != 0){
            isanagram = false;
        }
    }

    if(isanagram){
        printf("The words are anagrams.\n");
    }
    else{
        printf("The words are not anagrams.\n");
    }

    return 0;
}
