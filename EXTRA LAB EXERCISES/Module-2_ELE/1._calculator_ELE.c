<<<<<<< HEAD
#include<stdio.h>
 void main(){
  int num1,num2;
  int choose;
  printf("Enter the first Number ");
  scanf("%d",&num1);

  printf("choise one operater(+,-,*,/,%%):");
  scanf("%d",&choose);

  printf("Enter the second Number ");
  scanf("%d",&num2);

  switch(choose){

  case '+':
      printf("\n%d+%d=%d\n",num1,num2,num1+num2);
      break;
  case '-':
      printf("\n%d-%d=%d \n",num1,num2,num1-num2);
      break;

  case '*':
      printf("\n%d*%d=%d\n",num1,num2,num1*num2);
      break;

  case '/':
      if(num2!=0)
        printf("\n%d/%d=%d\n",num1,num2,num1/num2);
      else
        printf("\nError! division by zero not allowed");
      break;

  case '%':
      if(num2!=0)
      printf("\nresult=%d\n",num1%num2);
      else
        printf("\nErrr! Modulus by zero not allowd");
      break;


  default:
    printf("Enter valid oprator +,-,*,/,'%',");
  }


 }
=======
#include<stdio.h>
 void main(){
  int num1,num2;
  int choose;
  printf("Enter the first Number ");
  scanf("%d",&num1);

  printf("choise one operater(+,-,*,/,%%):");
  scanf("%d",&choose);

  printf("Enter the second Number ");
  scanf("%d",&num2);

  switch(choose){

  case '+':
      printf("\n%d+%d=%d\n",num1,num2,num1+num2);
      break;
  case '-':
      printf("\n%d-%d=%d \n",num1,num2,num1-num2);
      break;

  case '*':
      printf("\n%d*%d=%d\n",num1,num2,num1*num2);
      break;

  case '/':
      if(num2!=0)
        printf("\n%d/%d=%d\n",num1,num2,num1/num2);
      else
        printf("\nError! division by zero not allowed");
      break;

  case '%':
      if(num2!=0)
      printf("\nresult=%d\n",num1%num2);
      else
        printf("\nErrr! Modulus by zero not allowd");
      break;


  default:
    printf("Enter valid oprator +,-,*,/,'%',");
  }


 }
>>>>>>> 9c0d7d14f44d6cb42237d65485007219443d5365
