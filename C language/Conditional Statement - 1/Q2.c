    #include <stdio.h>
    main(){
        int a;
        printf("Enter number:");
        scanf("%d",&a);
        if(a==0){
        printf("This Number is Neutral");
    }else if(a>0) {
        printf("This Number is positive");
    } else{
        printf("This Number is Negative");
    }
    }