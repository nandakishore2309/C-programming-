#include <stdio.h>

int main(void) 
{
    char destination[256];
    printf("Enter destination file path: ");
    FILE *source = fopen("/home/cbit/Desktop/158/output.txt", "r");
    FILE *fp_destination = fopen("/home/cbit/Desktop/158/destination.txt", "w");
    if (!source || !fp_destination) 
    {
        printf("File error");
        if (source) fclose(source);
        if (fp_destination) fclose(fp_destination);
        return 1;
    }
    int ch;
    while ((ch = fgetc(source)) != EOF) 
    {
        fputc(ch, fp_destination);
    }
    fclose(source);
    fclose(fp_destination);
    printf("Copied successfully.\n");
    return 0;
}
