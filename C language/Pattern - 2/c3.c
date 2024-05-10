#include<stdio.h>

int main(){
    for(int x=5; x>=1; x--){
        for(int y=1; y<=x; y++){
            printf(" ");

        }
        for(int z=x; z<=5; z++){
            printf("%d",x);
        }
        printf("\n");
    }
}