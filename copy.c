#include <stdio.h>

int main(void) 
{
    FILE *fp;
    char text[100];

    fp = fopen("/home/cbit/Desktop/158/output.txt", "w");
    if (fp == NULL) 
    {
        printf("Error: Could not open file.\n");
        return 1;
    }
    printf("Enter text to write:\n");
    if (fgets(text, sizeof(text), stdin) != NULL) 
    {
        fprintf(fp, "%s", text);
        printf("Successfully written.\n");
    }

    fclose(fp);
    return 0;
}
