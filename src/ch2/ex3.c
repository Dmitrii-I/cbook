#include <stdio.h>

int main(void) {
    int height = 8, length = 12, width = 10; /* using initializers here */
    int volume = height * length * width;    /* initializer here too */

    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    /* instead of weight variable, put an expression for it */
    printf("Dimensional weight (pounds): %d\n", (volume + 165) / 166);

    return 0;
}
