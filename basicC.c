#include <stdio.h>

int main()
{
	printf("Enter 0 to exit program\n"); // Sentinel value
	printf("Enter an integer to square: ");
	int s;
	scanf("%i", &s);
	
	while (s != 0) {
		printf("%i squared equals: %f\n", s, (double) s * (double) s);
		printf("Enter another integer or 0 to quit: ");
		scanf("%i", &s); 
	}

	printf("Program shutting down\n");
	return 0;
}
