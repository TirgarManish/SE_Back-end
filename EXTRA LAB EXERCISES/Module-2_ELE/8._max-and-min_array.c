#include<stdio.h>
 void main(){
    int a[10];
    int n,i;

    printf("============================================================\n");
    printf("Enter a array 10 elements:\n");
    for(i=0;i<10;i++)
      {
          scanf("%d",&a[i]);
      }

    int min=a[0];
    int max=a[0];

    for(int i=0;i<10;i++)
         {
            if(a[i]>max)
                {
                    max=a[i];

                }
            if(a[i]<min)
                {
                    min=a[i];
                }
        }

    printf("Min Element value of Array:%d\n",min);
    printf("Max Element value of Array:%d\n",max);

    printf("============================================================\n");


    int temp;
    for(i=0;i<9;i++)
     {
         for(int j=i+1;j<10;j++)
         {
            if(a[i]>a[j])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }

         }
     }

    printf("------Array seriese Min to Max------\n");
    for(i=0;i<10;i++)
     {
         printf("%d\n",a[i]);
     }
    printf("\n============================================================");


    }
