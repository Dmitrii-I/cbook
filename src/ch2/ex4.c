#include<stdio.h>

int main(void) {
    int int_var_1, int_var_2, int_var_3;
    float float_var_1, float_var_2, float_var_3;

    printf("Value of uninitialized int variable 1 is: %d\n", int_var_1);
    printf("Value of uninitialized int variable 2 is: %d\n", int_var_2);
    printf("Value of uninitialized int variable 3 is: %d\n", int_var_3);


    printf("Value of uninitialized float variable 1 is: %f\n", float_var_1);
    printf("Value of uninitialized float variable 2 is: %f\n", float_var_2);
    printf("Value of uninitialized float variable 3 is: %f\n", float_var_3);

    return 0;
}
