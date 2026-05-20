#include <stdio.h>

int main(void){

    int n = 99, row = 0, col = 0, counter = 2, prev_row = 0, prev_col = 0;
    printf("This program creates a magic square of a specified size.\nThe size must be an odd number between 1 and 99.\nEnter size of magic square: ");
    scanf("%d", &n);
    if(n % 2 == 0){
        printf("[-] Not an odd number!\n");
        return 0;
    }

    int square[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            square[i][j] = 0;
        }
    }

    col = (n / 2); /* Calculate starting point index*/
    square[row][col] = 1;
    prev_row = row;
    prev_col = col;

    while(counter <= (n*n)){
        prev_row = row;
        prev_col = col;
        col = (col + 1) % n;
        if (row - 1 < 0) row = n - 1; 
        else row--;
        
        /* Check if element is not taken (should be 0) */
        if (square[row][col] == 0){
            square[row][col] = counter;
            counter++;
        }
        else {
            row = (prev_row + 1) % n;
            col = prev_col;
            square[row][col] = counter;
            counter++;
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf(" %2d ", square[i][j]);
        }
        printf("\n");
    }
    return 0;
}
