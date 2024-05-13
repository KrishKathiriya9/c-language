#include<stdio.h>
main(){
    int arr[]={255,55,96,52,131,66,77};
    int Min=arr[0];
    for(int a=0;a<=6;a++){
        if(arr[a]<Min){
            Min=arr[a];
        }
        
    }
    printf("The Minmum num Is:%d\n",Min);
}