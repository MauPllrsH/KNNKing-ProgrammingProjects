#include <stdio.h>

int main(void)
{
	int digits = 0, number, printable_num;
	printf("Enter a number: ");
	scanf("%d", &number);
	printable_num = number;
	
	do {
		++digits;
		number /= 10;
	} while (number > 0);
	
	printf("The number %d has %d digits.\n", printable_num, digits);
	return 0;
}
