#include<stdio.h>

int main(){
    for(int a=5; a>=1; a--){
        for(int b=4; b>=a; b--){
            printf(" ");

        }
        for(int d=a; d>=1; d--){
            printf("%d",d);
        }
        printf("\n");
    }
}