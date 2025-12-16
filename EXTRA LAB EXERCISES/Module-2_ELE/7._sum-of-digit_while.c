<<<<<<< HEAD
#include<stdio.h>
 void main(){
  int num;
  int reverse;
  printf("==============================================\n");
  printf("Enter the Number:");
  scanf("%d",&num);
  int num1=num;
  int sum=0,temp;
  while(num>0){
    temp=num%10;
    reverse=reverse*10+temp;
    sum=sum+temp;

  num=num/10;

  }
  printf("%d this digit sum of:%d\n",num1,sum);
  printf("%d number reverse of:%d\n",num1,reverse);
 printf("==============================================\n");

 }
=======
#include<stdio.h>
 void main(){
  int num;
  int reverse;
  printf("==============================================\n");
  printf("Enter the Number:");
  scanf("%d",&num);
  int num1=num;
  int sum=0,temp;
  while(num>0){
    temp=num%10;
    reverse=reverse*10+temp;
    sum=sum+temp;

  num=num/10;

  }
  printf("%d this digit sum of:%d\n",num1,sum);
  printf("%d number reverse of:%d\n",num1,reverse);
 printf("==============================================\n");

 }
>>>>>>> 9c0d7d14f44d6cb42237d65485007219443d5365
