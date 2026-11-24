#include <stdio.h>
#include <string.h>

// Define a structure for Laptop details
struct Laptop {
    char brand[50];
    char processor[50];
    int ram_gb;
    int storage_gb;
    float price;
};

int main() {
   
    struct Laptop lap1 = {"Dell Inspiron", "Intel Core i5", 16, 512, 65000.00};
    struct Laptop lap2 = {"HP Pavilion", "AMD Ryzen 7", 16, 1024, 72000.00};

    printf("=========================================\n");
    printf("         LAPTOP SPECIFICATION COMPARISON\n");
    printf("=========================================\n\n");

    // Display Laptop 1 Details
    printf("Laptop 1:\n");
    printf("  Brand:     %s\n", lap1.brand);
    printf("  Processor: %s\n", lap1.processor);
    printf("  RAM:       %d GB\n", lap1.ram_gb);
    printf("  Storage:   %d GB\n", lap1.storage_gb);
    printf("  Price:     ₹%.2f\n\n", lap1.price);

    // Display Laptop 2 Details
    printf("Laptop 2:\n");
    printf("  Brand:     %s\n", lap2.brand);
    printf("  Processor: %s\n", lap2.processor);
    printf("  RAM:       %d GB\n", lap2.ram_gb);
    printf("  Storage:   %d GB\n", lap2.storage_gb);
    printf("  Price:     ₹%.2f\n\n", lap2.price);

    printf("=========================================\n");
    printf("             COMPARISON RESULT\n");
    printf("=========================================\n");

  
    if (lap1.price < lap2.price) {
        printf("- Price: %s is cheaper by ₹%.2f.\n", lap1.brand, lap2.price - lap1.price);
    } else if (lap2.price < lap1.price) {
        printf("- Price: %s is cheaper by ₹%.2f.\n", lap2.brand, lap1.price - lap2.price);
    } else {
        printf("- Price: Both laptops cost the same.\n");
    }

    
    if (lap1.ram_gb > lap2.ram_gb) {
        printf("- RAM: %s has more RAM (%d GB vs %d GB).\n", lap1.brand, lap1.ram_gb, lap2.ram_gb);
    } else if (lap2.ram_gb > lap1.ram_gb) {
        printf("- RAM: %s has more RAM (%d GB vs %d GB).\n", lap2.brand, lap2.ram_gb, lap1.ram_gb);
    } else {
        printf("- RAM: Both laptops have the same RAM capacity (%d GB).\n", lap1.ram_gb);
    }

   
    if (lap1.storage_gb > lap2.storage_gb) {
        printf("- Storage: %s has higher storage (%d GB vs %d GB).\n", lap1.brand, lap1.storage_gb, lap2.storage_gb);
    } else if (lap2.storage_gb > lap1.storage_gb) {
        printf("- Storage: %s has higher storage (%d GB vs %d GB).\n", lap2.brand, lap2.storage_gb, lap1.storage_gb);
    } else {
        printf("- Storage: Both laptops have the same storage capacity (%d GB).\n", lap1.storage_gb);
    }

    printf("=========================================\n");

    return 0;
}
