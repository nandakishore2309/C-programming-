#include <stdio.h>

struct textbook { 
    int number;
    int year;
    int edition;
    char title[50];
    char author[50];
};

int main() {
   
    struct textbook t[3] = {
        {1, 2012, 2, "Programming_in_C", "Pradip_Dey"},
        {2, 2018, 2, "THE_C_Programming_language", "B.W.Kernighan"},
        {3, 2024, 4, "A_Structured_programming_language", "Hassan"}
    };
    
    int i;
    
    for (i = 0; i < 3; i++) {  
        printf("Textbook details:\n");
        printf("number: %d\n", t[i].number);
        printf("year: %d\n", t[i].year);
        printf("edition: %d\n", t[i].edition);
        
        printf("title: %s\n", t[i].title);
       
        printf("author: %s\n\n", t[i].author);
    }
    
    return 0;
}
