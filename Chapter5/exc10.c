#include <stdio.h>

int main(void){
	int digit, grade;

	printf("Enter a numerical grade: ");
	scanf("%d", &grade);
	
	digit = grade / 10;

	switch (digit){
		case 0: case 1: case 2: case 3: case 4: case5: printf("Letter grade: F"); break;
		case 6: printf("Letter grade: D"); break;
		case 7: printf("Letter grade: C"); break;
		case 8: printf("Letter grade: B"); break;
		case 9: case 10: printf("Letter grade: A"); break;
		default: printf("Error, input is not a grade!\n"); break;
	}

	return 0;
}
