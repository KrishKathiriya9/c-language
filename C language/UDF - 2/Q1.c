#include <stdio.h>


int sum(int arr[], int a) {
    int sum = 0;
    for (int i = 0; i < a; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int a;
    printf("Enter array size: ");
    scanf("%d", &a);

    int arr[a];
    
    printf("Enter array elements:\n");
    for (int i = 0; i < a; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    
    int array = sum(arr, a);

    printf("The sum of Array: %d\n", array);

 return 0;
}