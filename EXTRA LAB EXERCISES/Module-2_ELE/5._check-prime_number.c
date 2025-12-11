#include<stdio.h>
 void main(){
  int num,isprime=1;

  printf("Enter the Numer:");
  scanf("%d",&num);

 if(num<=1){
    isprime=1;
 }
 else
 {
     for(int i=2; i<=num/2;i++)
     {
         if(num%i==0)
         {
             isprime=0;
             break;
         }
     }
 }

 if(isprime==1)
    printf("%d is a prime number.\n",num);
 else
    printf("%d is a not prime number.\n",num);


 }
