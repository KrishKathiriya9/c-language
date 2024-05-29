#include<stdio.h>
main(){

int arr[4]={1,2,3,4};
int *ptr[4];

for(int i=0;i<=3;i++){
    ptr[i]=&arr[i];
printf("%u %d\n",ptr[i],*ptr[i]);
}


}