#include <stdio.h>

/* 

The idea here is to play with casting and understand the bits on my own machine

The program breaks around 999289. The variable gets overflowed and the bit flips to a negative number in the i * i response
The n variable should be able to hold more.

When using short, the maximum value for n is 32767. After this the number goes to a negative number. When I change it to an unsigned
short, as expected I can do more numbers. The program is able to continue past 32767.

I re-ran int and tried 2,147,483,647. This took a WHILE to run, but it confirmed my machine is at least 32-bit.

Since the for loops were taking ages, I just changed the code to print the single operation.

And with this I tried int + 2,147,483,648 and got a flip on the sign, confirming my max int is 2,147,483,647 and I have at least 32-bit.

Now for the long, I converted everything and updated the prints and scans and confirmed my machine is running a 64-bit CPU.

*/

int main(void){
	long n;

	printf("This program prints a table of squares.\n");
	printf("Enter the number of entries: ");
	scanf("%ld", &n);
	
	printf("%10ld\t%10ld\n", (long) n, n * n);

	return 0;
}
