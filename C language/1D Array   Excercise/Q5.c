    #include<stdio.h>
    main(){
        int n;
        printf("Enter the size of array:");
        scanf("%d",&n);
        int array[n];
        int sum=0;
        
        for(int a=0;a<n;a++){   
            printf("Enter the value :");
            scanf("%d",&array[a]);
        }
        for(int a=0;a<n;a++){
            
            sum=sum+array[a];
            
            
        }
        printf("Sum:%d\n",sum);
    }