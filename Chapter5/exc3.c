#include <stdio.h>

int main(void){
	float originalCommission, rivalCommission, numShares, priceShare, value;

	printf("Enter the number of shares and the price per share separated by a space: ");
	scanf("%f %f", &numShares, &priceShare);

	value = numShares * priceShare;	
	
	/*Calculate original commission*/
	if (value < 2500.00f)
		originalCommission = 30.00f + 0.017f * value;
	else if (value < 6250.00f)
		originalCommission = 56.00f + 0.0066f * value;
	else if (value < 20000.00f)
		originalCommission = 76.00f + 0.0034f * value;
	else if (value < 50000.00f)
		originalCommission = 100.00f + 0.0022f * value;
	else if (value < 500000.00f)
		originalCommission = 155.00f + 0.0011f * value;
	else
		originalCommission = 255.00f + 0.0009f * value;
	
	if (originalCommission < 39.00f)
		originalCommission = 39.00f;

	printf("Original Commission: $%.2f\n", originalCommission);

	/*Calculate rival commission*/

	if (numShares < 2000.00f)
		rivalCommission = 33.00f + 0.03f * numShares;
	else 
		rivalCommission = 33.00f + 0.02f * numShares;

	printf("Rival Commission: $%.2f\n", rivalCommission);

	return 0;
}
