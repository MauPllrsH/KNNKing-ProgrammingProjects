#include <stdio.h>

int main(void){
	int one, two, three, four, five, six, seven, eight, nine, ten, eleven, twelve, check, first_sum, second_sum, total;
	printf("Enter the first 12 digits of an EAN: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &one, &two, &three, &four, &five, &six, &seven, &eight, &nine, &ten, &eleven, &twelve);

	first_sum = two + four + six + eight + ten + twelve;
	second_sum = one + three + five + seven + nine + eleven;

	total = ((first_sum * 3) + second_sum) - 1;
	total %= 10;
	check = 9 - total;

	printf("Check digit: %d", check);
	return 0;
}
