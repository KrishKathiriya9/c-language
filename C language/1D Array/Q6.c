#include<stdio.h>
main(){
    int arr[]={5,7,9,12,155,210,90};
    int max=0;
    for(int a=0;a<=6;a++){
        if(arr[a]>max){
            max=arr[a];
        }
        
    }
    printf("The Max num Is:%d\n",max);
}