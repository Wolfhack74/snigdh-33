#include <stdio.h>

int main() {
    int m[4][4];
    int i, j;

    printf("Enter the elements of the 3x3 matrix: \n");
    for (i = 0; i < 4; i=i+1) 
    {
        for (j = 0; j < 4; j=j+1) 
        {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    int determinant = m[0][0] * (m[1][1] * m[2][2] - m[1][2] * m[2][1]) -
                      m[0][1] * (m[1][0] * m[2][2] - m[1][2] * m[2][0]) +
                      m[0][2] * (m[1][0] * m[2][1] - m[1][1] * m[2][0]);

    printf("The determinant is: %d\n", determinant);

    return 0;
}