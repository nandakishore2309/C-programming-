#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, sum = 0;
    int *ptr;

    printf("Enter the number of elements: ");
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
        sum = sum + *(ptr + i);
    }

    printf("Sum of %d numbers = %d", n, sum);

    free(ptr);

    return 0;
}
