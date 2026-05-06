#include <stdio.h>

int main(void){
	int i, n;

	printf("This program prints a table of squares.\n");
	printf("Enter the number of entries: ");
	scanf("%d", &n);
	getchar(); /* Eat the first Enter after reading the integer */
	
	for (i = 1; i <=n; i++){
		printf("%10d%10d\n", i, i * i);
		if ( i % 24 == 0 ){
			printf("Press Enter to continue...");
			if (getchar() != '\n'){
				break;
			}
		}
	}
	return 0;
}
