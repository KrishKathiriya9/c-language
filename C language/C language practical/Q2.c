#include <stdio.h>
int main() {
    int a;
    printf("Enter the size of array:");
    scanf("%d",&a);
    int arr[a]; 
   int smallest;
    for (int i = 0; i < a; i++) {
        printf("Enter the elements[%d]:",i);
        scanf("%d", &arr[i]);
    }
    smallest = arr[0]; 
    for (int i = 1; i < a; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    printf("The smallest element is: %d\n", smallest);
}