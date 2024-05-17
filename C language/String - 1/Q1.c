#include<stdio.h>
main(){
    char a[]="hello world";
    for(int i=0;a[i]!=NULL;i++){
        if(a[i]>='a' && a[i]<='z'){
            a[i] -=32;
        }
        printf("%c",a[i]);
    }
    
    
    }