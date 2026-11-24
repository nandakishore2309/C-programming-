#include <stdio.h>
struct Employee 
  {
    int id;
    char name[50];
    float salary;
   }emp;

int main() {
    
    struct Employee emp[5];
    int i;

    printf("=== Enter Details for 5 Employees ===\n");
    for (i = 0; i < 5; i++) 
    {
        printf("\n Employee %d:\n", i + 1);
        
        printf("Enter Employee ID: ");
        scanf("%d", &emp[i].id);
        
        printf("Enter Employee Name (no spaces): ");
        scanf("%s", emp[i].name);
        
        printf("Enter Employee Salary: ");
        scanf("%f", &emp[i].salary);
    }

    printf("\n\n========================================\n");
    printf("           EMPLOYEE RECORDS             \n");
    printf("========================================\n");
    printf("%-10s %-20s %-12s\n", "ID", "Name", "Salary (₹)");
    printf("----------------------------------------\n");
    
    for (i = 0; i < 5; i++) 
    {
        printf("%-10d %-20s ₹%-11.2f\n", emp[i].id, emp[i].name, emp[i].salary);
    }
    printf("========================================\n");

    return 0;
}
