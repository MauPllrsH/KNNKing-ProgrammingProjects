#include <stdio.h>

int main(void){
	float income, tax;

	printf("Enter taxable income: ");
	scanf("%f", &income);
	
	if (income < 750.00f)
		tax = income * 0.01;
	else if (income < 2250.00f)
		tax = 7.5f + (income * 0.02);
	else if (income < 3750.00f)
		tax = 37.50f + (income * 0.03);
	else if (income < 5250.00f)
		tax = 82.50f + (income * 0.04);
	else if (income < 7000.00f)
		tax = 142.50f + (income * 0.05);
	else
		tax = 230.00f + (income * 0.06);

	printf("Tax due: %.2f", tax);
	return 0;
}
