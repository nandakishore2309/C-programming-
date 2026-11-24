#include <stdio.h>

union Student {
    int rollno;
    float marks;
    char grade;
};

int main(void) 
{
    union Student s;
    printf("Enter roll number: ");
    scanf("%d", &s.rollno);
    printf("Roll Number: %d\n", s.rollno);
    printf("Enter marks: ");
    scanf("%f", &s.marks);
    printf("Marks: %.2f\n", s.marks);
    printf("Enter grade: ");
    scanf(" %c", &s.grade);
    printf("Grade: %c\n", s.grade);
    return 0;
}
