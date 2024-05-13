#include<stdio.h>
main(){
    int arr[]={20,25,21,7,54,6,3};
    for(int a=0;a<=6;a++){
        if(arr[a] % 2==0){
            printf("The Even Num is:%d\n",arr[a]);
        }
    }
}