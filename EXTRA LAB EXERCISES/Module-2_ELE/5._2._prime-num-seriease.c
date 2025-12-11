#include<stdio.h>
 void main(){
  int num,isprime=1;

  printf("Enter the Number:");
  scanf("%d",&num);

  for(int i=2;i<=num;i++)
  {
      isprime=1;
      for(int j=2;j<=i/2;j++)
      {
          if(i%j==0){
            isprime=0;
            break;
          }
      }
      if(isprime)
        printf("%d\n",i);
  }


 }
