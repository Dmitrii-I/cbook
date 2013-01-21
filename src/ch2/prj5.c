#include <stdio.h>

int main(void) {
    float x;
    printf("Enter a value for x: ");
    scanf("%f", &x);
    float answer = 3*x*x*x*x*x + 2*x*x*x*x - 5*x*x*x -x*x + 7*x - 6;
    printf("The value of the polynomial is: %f\n", answer);
    return 0;
}

