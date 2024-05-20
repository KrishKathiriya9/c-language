#include<stdio.h>

 int main(){

    char n1[100];
    char n2[100];
    
    printf("Enter First String : ");
    gets(n1);

    printf("Enter First String : ");
    gets(n2);

    if(strcmp(n1,n2) == 0){
        printf("string are equal");
    }
    else{
        printf("string are not equal");
    }
    return 0;
    
}