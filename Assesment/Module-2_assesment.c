#include<stdio.h>
 void main()
 {
     int i;
     printf("Enter the Number ");
     scanf("%d",&i);
     do{if(i%2==0){
        printf("%d\n",i);
     }
        i++;
     }while(i!=1000);
 }
