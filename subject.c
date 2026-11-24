
#include <string.h>

#include <stdio.h>

#define NUM_SUBJECTS 5
#define NUM_SECTIONS 3
#define MAX_LEN 10

struct EceSection {
    char subjects[NUM_SUBJECTS][MAX_LEN];
};

int main() {

    struct EceSection ece_sec1 = {
        {"BEE", "PSPC", "AIFA", "MTAC", "CHEM"}
    };

    struct EceSection ece_sections[NUM_SECTIONS];

    int i, j;


    for (i = 0; i < NUM_SECTIONS; i++) {
        ece_sections[i] = ece_sec1;
    }

    printf("=========================================\n");
    printf(" FIRST SEMESTER SUBJECTS (ALL ECE SECTIONS)\n");
    printf("=========================================\n\n");

    for (i = 0; i < NUM_SECTIONS; i++) {

        printf("ECE Section %d Subjects:\n", i + 1);

        for (j = 0; j < NUM_SUBJECTS; j++) {
            printf("  [%d] %s\n", j + 1,
                   ece_sections[i].subjects[j]);
        }

        printf("\n");
    }

    printf("=========================================\n");

    return 0;
}
