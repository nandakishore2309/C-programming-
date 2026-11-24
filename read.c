#include<stdio.h>
 int main()
{
 FILE*fp;
 char ch;
 fp =fopen("//home//cbit//Desktop//158//output.txt","r");
 if(fp == NULL)
  {
    printf("Error:Could not open file.\n");
    return 1;
  }
 printf("File contents:\n");
 while((ch = fgetc(fp))!=EOF)
 {
  putchar(ch);
 }
 fclose(fp);
 return 0;
}
