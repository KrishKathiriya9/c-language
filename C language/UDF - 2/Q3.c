#include <stdio.h>
 fact(int n) {
    if (n != 0) {
         return n * fact(n - 1);
    } else {
       return 1;
    }
}
 main() {
    int num;

    printf("Enter a positive num: ");
    scanf("%d", &num);

    
    printf("The factorial is: %d\n",  fact(num));

}
