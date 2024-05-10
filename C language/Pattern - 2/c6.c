#include <stdio.h>

int main() {

    for (int a = 1; a <= 5; a++) {
    
        for (int b = a; b <= 5; b++) {
            printf(" ");
        }

        for (int c = 1; c <= 2 * a - 1; c++) {
            printf("*");
        
        }

        printf("\n");
    }

    
    return 0;
}
