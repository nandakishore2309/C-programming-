#include <stdio.h>

int main() {
 int rows, a, b, num;
printf("Enter the number of rows: ");
 scanf("%d", &rows);
for (a = 1; a <= rows; a++) 
{
num = 1;
for (b = 1; b <= rows - a; b++)
{
printf(" ");
}
for (b = 1; b <= a; b++) 
{
printf("%d ", num);
num = num * (a - b) / (b);
}
printf("\n");
}
return 0;
}

