#include <stdio.h>
#include <math.h>

int main(void){
    double x, y = 1, old_y, new_y, average;

    printf("Enter a positive number: ");
    scanf("%lf", &x);

    old_y = y;
    new_y = (old_y + (x / old_y)) / 2;
    while ( (fabs(old_y - new_y)) > (0.00001 * y)){
        old_y = new_y;
        new_y = (old_y + (x / old_y)) / 2;

    }
    
    printf("Square root: %lf\n", new_y);

    return 0;
}
