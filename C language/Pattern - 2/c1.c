    #include<stdio.h>

    int main(){
        for(int a=1; a<=5; a++){
            for(int c=4; c>=a; c--){
                printf(" ");

            }
            for(int b=a; b>=1; b--){
                printf("%d",b);
            }
            printf("\n");
        }
    }