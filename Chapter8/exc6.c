#include <stdio.h>
#include <ctype.h>

int main(){
    
    char original[100];
    int length = 0;
    int ch;

    printf("Enter a message: ");

    while((ch = getchar()) != '\n'){
        original[length] = ch;
        length++;
    }

    printf("In B1FF-speak: ");

    for(int i = 0; i < length; i++){
        char chr = toupper(original[i]);
        switch(chr){
            case 'A': printf("4"); break;
            case 'B': printf("8"); break;
            case 'E': printf("3"); break;
            case 'I': printf("1"); break;
            case 'O': printf("0"); break;
            case 'S': printf("5"); break;
            default: printf("%c", chr);
        }
    }

    printf("!!!!!!!!!!!!!\n");

    return 0;
}
