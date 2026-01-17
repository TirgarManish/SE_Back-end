/*Array Sum and Average
o Write a C++ program that accepts an array of integers, calculates the sum and
average, and displays the results.
o Objective: Understand basic array manipulation.
*/


#include<iostream>
using namespace std;

int main()
{
    int arr[]={1,2,4,32,10,20};

    int sum=0;

    int len= sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<len;i++)
    {
        sum+=arr[i];
    }
    cout<<"sum of Array = "<<sum<<endl;
    cout<<"Avrage of Array = "<<(float)sum / len<<endl;
}
