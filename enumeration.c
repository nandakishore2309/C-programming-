#include <stdio.h>

enum week { MON=1, TUE, WED, THU, FRI, SAT, SUN };

int main(void) 
{
    enum week day = WED;
    printf("Day number: %d\n", day);
    return 0;
}
