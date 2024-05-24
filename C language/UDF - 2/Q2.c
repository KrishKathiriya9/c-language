#include <stdio.h>
count(char a[]) {
    int b = 0;
    while (a[b]!=NULL) {
        b++;
    }
    return b;
}
 main() {
    char a[100];
    printf("Enter any string: ");
    scanf("%s", a);
    printf("Length is: %d\n", count(a));

}