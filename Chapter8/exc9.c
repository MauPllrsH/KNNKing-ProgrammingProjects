#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define ROWS 10
#define COLUMNS 10

int main(void){
    srand(time(NULL));  // seed the RNG

    char letters[] = {'B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char grid[ROWS][COLUMNS];
    for(int i = 0; i < ROWS; i++)
        for(int j = 0; j < COLUMNS; j++)
            grid[i][j] = '.';

    grid[0][0] = 'A';
    int letter_idx = 0;
    int row = 0, col = 0;

    while(letter_idx < 25){
        bool up    = (row - 1 >= 0)       && (grid[row-1][col] == '.');
        bool down  = (row + 1 < ROWS)     && (grid[row+1][col] == '.');
        bool left  = (col - 1 >= 0)       && (grid[row][col-1] == '.');
        bool right = (col + 1 < COLUMNS)  && (grid[row][col+1] == '.');

        if(!up && !down && !left && !right){
            break;
        }
        int move;
        do {
            move = rand() % 4;
        }
        while (
            (move == 0 && !up) ||
            (move == 1 && !right) ||
            (move == 2 && !down) ||
            (move == 3 && !left)
        );

        if (move == 0) row--;
        else if (move == 1) col++;
        else if (move == 2) row++;
        else if (move == 3) col--;

        grid[row][col] = letters[letter_idx];
        letter_idx++;
    }

    for (int i = 0; i < ROWS; i++){
        for (int j = 0; j < COLUMNS; j++){
            printf(" %c ", grid[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
