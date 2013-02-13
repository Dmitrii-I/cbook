#include <stdio.h>

int main(void)
{
	int input, first, second, third, fourth, fifth;

	printf("Enter a number between 0 and 32767: ");
	scanf("%d", &input);

	first = (input / 8 / 8 / 8 / 8) % 8;
	second = (input / 8 / 8 / 8) % 8;
	third = (input / 8 / 8) % 8;
	fourth = (input / 8) % 8;
	fifth = input % 8;

	printf("In octal, your number is: %d%d%d%d%d\n", first, second, third, fourth, fifth);

	return 0;
}
