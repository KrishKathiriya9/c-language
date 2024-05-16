#include <stdio.h>
main()
{
    int r, c;
    printf("Enter the size of row:");
    scanf("%d", &r);
    printf("Enter the size of col:");
    scanf("%d", &c);
    int sum1 = 0;
    int sum2 =0;
    int sum = 0;
    int array[r][c];
    int digonal = r - 1;
    for (int a = 0; a < r; a++)
    {
        for (int b = 0; b < c; b++)
        {
            printf("Enter the Elements[%d][%d]:", a, b);
            scanf("%d", &array[a][b]);
        }
        printf("\n");
    }
    printf("\n");

    for (int a = 0; a < r; a++)
    {
        for (int b = 0; b < c; b++)
        {
            if (a + b == digonal)
            {
                sum1 = sum1 + array[a][b];
            }
        }

        printf("\n");
    }
    for(int a=0;a<r;a++){
        for(int b=0;b<c;b++){
            if (a==b)
            {
         sum2=sum2+array[a][b];
            }
           
           
        }
        
        printf("\n");
    }
    sum=sum1+sum2;
    printf("Sum of diagonal & anti-diagonal:%d", sum);
}