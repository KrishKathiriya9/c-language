#include <stdio.h>

int reverseNumber(int num) {
    int reversedNum = 0;
    while(num != 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }
    return reversedNum;
}

int main() {
    int num;
    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    if(num < 100 || num > 999) {
        printf("Invalid input. Please enter a 3-digit number.\n");
        return 1;
    }

    int reversedNum = reverseNumber(num);
    printf("The reverse of %d is %d.\n", num, reversedNum);

    return 0;
}