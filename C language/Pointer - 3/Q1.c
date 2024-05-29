#include<stdio.h>
main(){
    int arr[]={1,2,3,4,5};
    int *ptr;
    ptr=&arr;
    for(int i=0;i<=4;i++){
        printf("%u %d\n",ptr+i,*(ptr+i));
    }
}