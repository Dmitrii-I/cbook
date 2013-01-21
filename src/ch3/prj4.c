#include <stdio.h>

int main(void)
{
    int first_part, second_part, third_part;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &first_part, &second_part, &third_part); 

    /* Use %.3d and %.4d to recreate any leading zeros, which were stripped 
       when phone number was stored into integer variables. */ 
    printf("You entered: %.3d.%.3d.%.4d\n", first_part, second_part, third_part);

    return 0;
}

