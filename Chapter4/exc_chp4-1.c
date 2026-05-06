#include <stdio.h>

int main(void){
	
	int input, first, second;
	printf("Enter a two-digit number: ");
	scanf("%d", &input);

	first = input / 10;
	second = input % 10;

	printf("The reversal is: %d%d\n", second, first);

	return 0;
}
