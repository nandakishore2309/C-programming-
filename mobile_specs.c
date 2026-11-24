#include <stdio.h>
struct Mobile {
    char brand[30];
    char model[30];
    int ram;      
    int storage;  
    float price; 
};

int main() {
    struct Mobile phone;
    struct Mobile *p = &phone;
    printf("=== Enter Mobile Specifications ===\n");
    printf("Enter Brand Name: ");
    scanf("%s", p->brand);
    printf("Enter Model Name: ");
    scanf("%s", p->model);
    printf("Enter RAM (in GB): ");
    scanf("%d", &p->ram);
    printf("Enter Storage (in GB): ");
    scanf("%d", &p->storage);
    printf("Enter Price (in ₹): ");
    scanf("%f", &p->price);
    printf("\n\n========================================\n");
    printf("          MOBILE SPECIFICATIONS         \n");
    printf("========================================\n");
    printf("Brand   : %s\n", p->brand);
    printf("Model   : %s\n", p->model);
    printf("RAM     : %d GB\n", p->ram);
    printf("Storage : %d GB\n", p->storage);
    printf("Price   : ₹%.2f\n", p->price);
    printf("========================================\n");

    return 0;
}
