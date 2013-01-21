#include <stdio.h>

int main(void) {
    float pi = 3.14f;
    int radius = 10;

    float volume = 4.0f / 3.0f * pi * radius * radius * radius;
    printf("The volume of a sphere with a radius of 10 metres is %f\n", volume);

    return 0;
}

