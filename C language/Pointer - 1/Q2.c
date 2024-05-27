#include <stdio.h>


int fibonacci(int fb, int a, int b) {
    if (fb > 0) {
        printf("%d ", a);
      return  fibonacci(fb - 1, b, a + b);
    }
}
main() {
    int fb;

    printf("Enter the number of Fibonacci : ");
    scanf("%d", &fb);

    printf("%d", fibonacci(fb,0,1));
   
}