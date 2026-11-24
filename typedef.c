#include <stdio.h>

typedef struct{
    int rollno;
    float marks;
    char grade;
}student;

int main(void) 
{
    student s;
    printf("Enter roll number: ");
    scanf("%d", &s.rollno);
    printf("Enter marks: ");
    scanf("%f", &s.marks);
    printf("Enter grade: ");
    scanf(" %c", &s.grade);
    printf("Roll Number: %d\n", s.rollno);
    printf("Marks: %.2f\n", s.marks);
    printf("Grade: %c\n", s.grade);
    return 0;
}
