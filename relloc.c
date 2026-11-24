#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, i, sum = 0;
    int *ptr, *temp;

    printf("Enter the initial number of elements: ");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory allocation failed");
        return 1;
    }

    printf("Enter %d numbers:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
    }

    printf("Enter the new number of elements: ");
    scanf("%d", &m);

    temp = (int *)realloc(ptr, m * sizeof(int));

    if (temp == NULL)
    {
        printf("Memory reallocation failed");
        free(ptr);
        return 1;
    }

    ptr = temp;

    printf("Enter %d more numbers:\n", m - n);

    for (i = n; i < m; i++)
    {
        scanf("%d", ptr + i);
    }

    for (i = 0; i < m; i++)
    {
        sum = sum + *(ptr + i);
    }

    printf("Sum of %d numbers = %d", m, sum);

    free(ptr);

    return 0;
}
