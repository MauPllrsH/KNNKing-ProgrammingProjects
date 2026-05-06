#include <stdio.h>

int main(void){

	int one, two, three, four, max, min;
	
	printf("Enter four integers: ");
	scanf("%d %d %d %d", &one, &two, &three, &four);

	max = min = one;
	
	if (max < two) max = two;
	else if (min > two) min = two;

	if (max < three) max = three;
	else if (min > three) min = three;

	if (max < four) max = four;
	else if (min > four) min = four;

	printf("Max %d\nMin %d", max, min);
	return 0;  
		
}
