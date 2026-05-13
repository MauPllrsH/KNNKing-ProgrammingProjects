#include <stdio.h>

int main(void){
    float nums[5][5], row_sum = 0.00, col_sum = 0.00, high = 0.00, low = 101.00;

    for(int i = 0; i < 5; i++){
        printf("Enter student %d grades: ", i+1);
        for(int j = 0; j < 5; j++){
            scanf("%f", &nums[i][j]);
        }
    }

    for(int row = 0; row < 5; row++){
        printf("\nStudent %d\n", row + 1);
        row_sum = 0;
        for(int col = 0; col < 5; col++){
            row_sum += nums[row][col];
        }
        printf("\tTotal Score: %.2f\n", row_sum);
        printf("\tAverage Score: %.2f", row_sum / 5);

    }

    for(int col = 0; col < 5; col++){
        col_sum = 0.0;
        high = 0.0;
        low = 100.0;
        for(int row = 0; row < 5; row++){
            col_sum += nums[row][col];
            if (nums[row][col] > high) high = nums[row][col];
            if (nums[row][col] < low) low = nums[row][col];
        }
        printf("\nAverage Quiz %d score: %.2f", col + 1, col_sum / 5);
        printf("\nHighest Quiz %d score: %.2f", col + 1, high);
        printf("\nLowest Quiz %d score: %.2f", col + 1, low);
    }

    printf("\n");

    return 0;
}
