#include <stdio.h>

int main(void){
	int day, month, year, eDay, eMonth, eYear;

	printf("Enter a date (mm/dd/yy): ");
	scanf("%d/%d/%d", &month, &day, &year);
	eDay = 0;
	eMonth = 0;
	eYear = 9999;

	while (month != 0 || day != 0 || year != 0){

		if(year < eYear){
			eDay = day;
			eMonth = month;
			eYear = year;
		} else if (year == eYear){
			if (month < eMonth){
				eDay = day;
				eMonth = month;
				eYear = year;
			} else if (month == eMonth){
				if (day < eDay){
					eDay = day;
					eMonth = month;
					eYear = year;
				}
			}
		}

		printf("Enter a date (mm/dd/yy): ");
    	scanf("%d/%d/%d", &month, &day, &year);
	}

	printf("%d/%d/%2.2d is the earliest date", eMonth, eDay, eYear);
	return 0;
}
