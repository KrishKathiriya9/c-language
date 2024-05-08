#include<stdio.h>
main(){
    for(int a=4;a>=1;a--){
        for(int b=4;b>=a;b--){
            printf("%d\t",a);
        }
        printf("\n");
    }
}