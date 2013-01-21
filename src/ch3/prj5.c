#include <stdio.h>

int main(void) 
{
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13, n14, n15, n16, 
        sum_row1, sum_row2, sum_row3, sum_row4, sum_col1, sum_col2,
        sum_col3, sum_col4, sum_diag1, sum_diag2;

    printf("Enter the numbers from 1 to 16 in any order:\n");
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", &n1, &n2, &n3, &n4, &n5, &n6,
        &n7, &n8, &n9, &n10, &n11, &n12, &n13, &n14, &n15, &n16);

    sum_row1 = n1 + n2 + n3 + n4;
    sum_row2 = n5 + n6 + n7 + n8;
    sum_row3 = n9 + n10 + n11 + n12;
    sum_row4 = n13 + n14 + n15 + n16;

    sum_col1 = n1 + n5 + n9 + n13;
    sum_col2 = n2 + n6 + n10 + n14;
    sum_col3 = n3 + n7 + n11 + n15;
    sum_col4 = n4 + n8 + n12 + n16;

    sum_diag1 = n1 + n6 + n11 + n16;
    sum_diag2 = n4 + n7 + n10 + n13;

    printf("\n%3d%3d%3d%3d\n", n1, n2, n3, n4);   
    printf("%3d%3d%3d%3d\n", n5, n6, n7, n8);   
    printf("%3d%3d%3d%3d\n", n9, n10, n11, n12);   
    printf("%3d%3d%3d%3d\n\n", n13, n14, n15, n16);   

    printf("Row sums: %d %d %d %d\n", 
        sum_row1, sum_row2, sum_row3, sum_row4);
    printf("Columns sums: %d %d %d %d\n",
        sum_col1, sum_col2, sum_col3, sum_col4);
    printf("Diagonal sums: %d %d\n\n", sum_diag1, sum_diag2);

    return 0;
}    
