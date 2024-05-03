#include <stdio.h>

int main() {
    int num, first, last, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    first = num % 10;
    while (num!= 0) {
        last = num % 10;
        num = num / 10;
    }

    sum = first + last;
    printf("The sum of the first and last digit is: %d\n", sum);

    return 0;
}