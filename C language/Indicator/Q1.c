#include<stdio.h>
main(){

int a;
printf("Enter the size of array:");
scanf("%d",&a);
int arr[a];
int sum;
for(int i=0;i<a;i++){
    printf("Enter the elements:",a);
    scanf("%d",&arr[i]);
}
for(int i=0;i<=a;i++){
    sum=sum+arr[i];
}
int *ptr;
ptr=sum/a;
printf("Avg is: %d",ptr);









}