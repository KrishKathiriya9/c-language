#include <stdio.h>

main() {
    int a = 5;
    int i, j;

    for (i = 1; i <= a ; i++) {
        
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        
        
        for (j = 1; j <= 2 * (a - i); j++) {
            printf("  "); 
        }
        
        
        for (j = i; j >= 1; j--) {
            printf("%d ", j);
        }
        
        printf("\n");
    }


}