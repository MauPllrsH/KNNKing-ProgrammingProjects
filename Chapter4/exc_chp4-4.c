#include <stdio.h>

int main(void){
	
	int input, one, two, three, four, five;
	printf("Enter a number between 0 and 32767: ");
	scanf("%d", &input);

	one = input % 8;
	input /= 8;
	
	two = input % 8;
	input /= 8;

	three = input % 8;
	input /= 8;

	four = input % 8;
	input /= 8;
	
	five = input % 8;
	
	printf("In octal, your number is: %d%d%d%d%d", five, four, three, two, one);

	return 0;
}
