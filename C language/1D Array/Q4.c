#include<stdio.h>
main(){
    int arr[]={8,6,5,4,9,21,14};
    for(int a=0;a<=6;a++){
        if(arr[a] % 2!=0){
            printf("The odd Num is:%d\n",arr[a]);
        }
    }
}