#include <stdio.h>

int main(void){
    int nums[5][5], row_sum = 0, col_sum = 0;

    for(int i = 0; i < 5; i++){
        printf("Enter row %d: ", i+1);
        for(int j = 0; j < 5; j++){
            scanf("%d", &nums[i][j]);
        }
    }

    printf("Row totals:");
    for(int row = 0; row < 5; row++){
        row_sum = 0;
        for(int col = 0; col < 5; col++){
            row_sum += nums[row][col];
        }
        printf(" %d", row_sum);
    }

    printf("\nColumn totals:");
    for(int col = 0; col < 5; col++){
        col_sum = 0;
        for(int row = 0; row < 5; row++){
            col_sum += nums[row][col];
        }
        printf(" %d", col_sum);
    }

    printf("\n");

    return 0;
}
