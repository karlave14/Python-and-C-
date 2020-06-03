#include <stdio.h>
#include <stdlib.h>
int tamano(int matrix[], int n)
{
    int i;
    int max = matrix[0];

    for (i = 1; i < n; i++)
        if (matrix[i] > max)
            max = matrix[i];

    return max;
}

int main()
{
    int matrix[] = {100, 3240, 1255, 4000, 808}; // matrix
    int n = sizeof(matrix)/sizeof(matrix[0]);
    printf("Largest in given array is %d\n ", tamano(matrix, n));
    return 0;
}
