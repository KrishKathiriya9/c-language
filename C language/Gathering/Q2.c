#include <stdio.h>

Area(int length, int width) {
    return length*width;
}
 main() {
    int length, width;

    printf("Enter the length:");
    scanf("%d",&length);

    printf("Enter the width:");
    scanf("%d",&width);

   int  area=Area(length,width);
    printf("The area of the rectangle is: %d\n", area);

    
}