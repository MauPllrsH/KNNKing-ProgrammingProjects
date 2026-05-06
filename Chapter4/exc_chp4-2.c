#include <stdio.h>

int main(void){
	
	int input, first, second, third;
	printf("Enter a three-digit number: ");
	scanf("%d", &input);

	first = input / 100;
	second = (input % 100) / 10;
	third = input %10;

	printf("The reversal is: %d%d%d\n", third, second, first);

	return 0;
}
