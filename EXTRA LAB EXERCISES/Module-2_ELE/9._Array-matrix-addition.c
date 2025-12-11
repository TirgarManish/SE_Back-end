#include<stdio.h>
 void main()
 {
     int a[2][2], b[2][2], result[2][2];
    int i, j;

    // Input first matrix
    printf("Enter elements of first 2x2 matrix:\n");
    for(i = 0; i < 2; i++)
        {
        for(j = 0; j < 2; j++) {
            scanf("%d", &a[i][j]);

        }
        printf("\n");
    }
    //Input Second Matrix
  printf("Enter elements of second 2x2 matrix:\n");
    for(i = 0; i < 2; i++)
        {
        for(j = 0; j < 2; j++) {
            scanf("%d\t", &b[i][j]);
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }

    //Addition of matrix
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            result[i][j]=a[i][j]+b[i][j];
        }
    }

    //addition matrix display
    printf("resultan 2*2 matrix after addition:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",result[i][j]);

        }
        printf("\n");
    }
 }
