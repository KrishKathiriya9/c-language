#include <stdio.h>
main(){
    for(int a=20;a<=30;a++){
        if(a==24){
            continue;
        }
        if(a%2==0){
            printf("%d\n",a);
        }

    }
}