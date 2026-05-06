#include <stdio.h>

int main(void)
{
	int hour, minute, result;
	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hour, &minute);
	
	if (hour < 12)
		printf("%d:%d AM", hour, minute);
	else if (hour == 12)
		printf("%d:%d PM", hour, minute);
	else if (hour < 24)
		printf("%d:%d PM", hour % 12, minute);
	else if (hour == 24)
		printf("%d:%d AM", hour / 2, minute);
	else
		printf("[-] Error! Invalid Date.");
	return 0;	
}
