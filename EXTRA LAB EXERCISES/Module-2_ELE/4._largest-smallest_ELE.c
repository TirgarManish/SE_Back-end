<<<<<<< HEAD
#include<stdio.h>
 void main()
 {
     int a,b,c;
     int op;

     printf("Enter the three Number: \n");
     scanf("%d",&a);
     scanf("%d",&b);
     scanf("%d",&c);

    printf("\n========================================================\n");
     printf("1.The largest number.\n");
     printf("2.The smallest number.\n\n");

    printf("========================================================\n");
     printf("Enter the option:");
     scanf("%d",&op);

     switch(op){

case 1:
    if(a>b && a>c)
        printf("The largest Number:%d",a);
    else
    {
        if(b>a && b>c)
            printf("The largest Number:%d",b);
        else
            printf("The largest Number:%d",c);
    }
    break;

case 2:
    if(a<b && a<c)
        printf("The smallest Number:%d",a);
    else
    {
        if(b<a && b<c)
            printf("The smallest Number:%d",b);
        else
            printf("The smallest Number:%d",c);
    }
    break;
default:
    printf("choise option is In valid ");
  }
 printf("\n========================================================");

}
=======
#include<stdio.h>
 void main()
 {
     int a,b,c;
     int op;

     printf("Enter the three Number: \n");
     scanf("%d",&a);
     scanf("%d",&b);
     scanf("%d",&c);

    printf("\n========================================================\n");
     printf("1.The largest number.\n");
     printf("2.The smallest number.\n\n");

    printf("========================================================\n");
     printf("Enter the option:");
     scanf("%d",&op);

     switch(op){

case 1:
    if(a>b && a>c)
        printf("The largest Number:%d",a);
    else
    {
        if(b>a && b>c)
            printf("The largest Number:%d",b);
        else
            printf("The largest Number:%d",c);
    }
    break;

case 2:
    if(a<b && a<c)
        printf("The smallest Number:%d",a);
    else
    {
        if(b<a && b<c)
            printf("The smallest Number:%d",b);
        else
            printf("The smallest Number:%d",c);
    }
    break;
default:
    printf("choise option is In valid ");
  }
 printf("\n========================================================");

}
>>>>>>> 9c0d7d14f44d6cb42237d65485007219443d5365
