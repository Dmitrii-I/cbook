#include <stdio.h>

int main(void) {
    float pi = 3.14f;
    float radius;
    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);
    float volume = 4.0f / 3.0f * pi * radius * radius * radius;
    printf("The volume of a sphere with a radius of 10 metres is %f\n", volume);
    return 0;
}

