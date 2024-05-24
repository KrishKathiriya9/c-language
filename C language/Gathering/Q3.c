#include <stdio.h>
Fact(int num) {
    if (num == 0) {
        return 1;
    } else {
        return num*Fact(num - 1);
    }
}

 main() {
    int num, fact;

    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("The factorial is: %d\n",Fact(num)); 
}