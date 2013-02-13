#include <stdio.h>

int main(void)
{
	int input;
	int first_digit;
	int second_digit;
	int third_digit;

	printf("Enter a three-digit number: ");
	scanf("%3d", &input);

	first_digit = input / 100;
	second_digit = (input / 10) % 10;
	third_digit = (input % 100) % 10;
	printf("The reversal is: %d%d%d\n", third_digit, second_digit, first_digit);

	return 0;
}
