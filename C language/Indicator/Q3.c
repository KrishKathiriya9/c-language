#include <stdio.h>

int cube(int *num) {
    int cub=(*num) * (*num) * (*num);
    return cub;
}
 main() {
    int num;
    printf("Enter a number:");
    scanf("%d",&num);

    printf("The number of cube is: %d\n",cube(&num));

    
}