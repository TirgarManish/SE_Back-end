#include<stdio.h>
 int main()
 {
     int a[3][3],b[3][3],result[3][3];
     printf("Input the First Matrix element\n");

     for(int i=0;i<3;i++)
     {
         printf("\n");
         for(int j=0;j<3;j++)
         {
             scanf("%d",&a[i][j]);
         }


     }
     printf("Input the second Matrix element\n");
     for(int i=0;i<3;i++)
     {
         printf("\n");
         for(int j=0;j<3;j++)
         {
             scanf("%d",&b[i][j]);
         }
     }
     printf("Show Matrix element first \n");
     for(int i=0;i<3;i++)
     {

         for(int j=0;j<3;j++)
         {
             printf("%d ",a[i][j]);
         }
         printf("\n");


     }
     printf("Show Matrix element second \n");
     for(int i=0;i<3;i++)
     {

         for(int j=0;j<3;j++)
         {
             printf("%d ",a[i][j]);
         }
         printf("\n");


     }

     printf("To matrix multiflication first and second mtrix \n");
     for(int i=0;i<3;i++)
     {
         for(int j=0;j<3;j++)
         {
             printf("%d\t",a[i][j]*b[i][j]);
         }
         printf("\n");
     }

 }
