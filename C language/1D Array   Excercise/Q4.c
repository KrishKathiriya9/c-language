
#include <stdio.h>
    main()
    {
        int n;
        printf("Enter the Size of array:");
        scanf("%d", &n);
        
        char arr[n];
        for (int a = 0; a < n; a++)
        {
            printf("Enter  the value:");
            scanf(" %c", &arr[a]);
        }
        for (int a = 0; a < n; a++)
        {
        
            
                printf("%c\n",arr[a]);
                
            
        }
        
    }
