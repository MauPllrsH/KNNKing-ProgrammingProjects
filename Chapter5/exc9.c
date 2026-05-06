#include <stdio.h>

int main(void){
	int dayOne, dayTwo, monthOne, monthTwo, yearOne, yearTwo;

	printf("Enter first date (mm/dd/yy): ");
	scanf("%d/%d/%d", &monthOne, &dayOne, &yearOne);

        printf("Enter second date (mm/dd/yy): ");
        scanf("%d/%d/%d", &monthTwo, &dayTwo, &yearTwo);

	if (yearOne < yearTwo){ printf("%d/%d/%.2d is earlier than %d/%d/%.2d", monthOne, dayOne, yearOne, monthTwo, dayTwo, yearTwo); return 0;}
	if (yearOne > yearTwo){ printf("%d/%d/%.2d is earlier than %d/%d/%.2d", monthTwo, dayTwo, yearTwo, monthOne, dayOne, yearOne); return 0;}
	

        if (monthOne < monthTwo){ printf("%d/%d/%.2d is earlier than %d/%d/%.2d", monthOne, dayOne, yearOne, monthTwo, dayTwo, yearTwo); return 0;}
        if (monthOne > monthTwo) { printf("%d/%d/%.2d is earlier than %d/%d/%.2d", monthTwo, dayTwo, yearTwo, monthOne, dayOne, yearOne); return 0;}
		

        if (dayOne < dayTwo){ printf("%d/%d/%.2d is earlier than %d/%d/%.2d", monthOne, dayOne, yearOne, monthTwo, dayTwo, yearTwo); return 0;}
        if (dayOne > dayTwo){ printf("%d/%d/%.2d is earlier than %d/%d/%.2d", monthTwo, dayTwo, yearTwo, monthOne, dayOne, yearOne); return 0;}
	
	printf("Days are the same");

	return 0;
}
