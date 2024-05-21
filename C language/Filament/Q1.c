#include <stdio.h>
int main() {
    char a[100];
    int c,lin = 0;
    printf("Enter a string: ");
    scanf("%s",&a);
    while (a[lin]!= '\0') {
    lin++;
    }
    for (int i = 0,  c = lin - 1; i < c; i++, c--) {
        if (a[i]!= a[c]) {
            printf("it is not a palindrome.\n");
            
        }
        else{
    printf("it is a palindrome.\n");}
    }

    return 0;
}