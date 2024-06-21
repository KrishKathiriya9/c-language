#include <stdio.h>
int main() {

    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    if (a > 0) {
        printf("This number is positive\n");
    } else if (a < 0) {
        printf("This number is negative\n");
    } else {
        printf("This number is zero\n");
    }

}