#include <stdio.h>

int main(void)
{
	int input;
	int first_digit;
	int second_digit;

	printf("Enter a two-digit number: ");
	scanf("%2d", &input);

	first_digit = input / 10;
	second_digit = input % 10;
	printf("The reversal is: %d%d\n", second_digit, first_digit);

	return 0;
}
