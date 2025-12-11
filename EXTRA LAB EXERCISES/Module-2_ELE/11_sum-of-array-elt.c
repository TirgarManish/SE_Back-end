#include<stdio.h>
 void main()
 {
   int n=0;
    int sum=0,avarage;
    int a[n];
    printf("Enter The Number of element of array:");
    scanf("%d",&n);

    printf("Enter The Array element:\n");
    for(int i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }

    int j=0;
    while(j<n)
    {
        sum=sum+a[j];
        j++;
    }
    avarage=sum/n;
    printf("This Element sum of:%d\n",sum);
    printf("This array Element avarage:%d",avarage);


 }
