//in asscending and descending order.
#include<iostream>
using namespace std;
int main()
{
    int arr[5]={6,3,8,9,2};
    const int size= 5;
    int temp;

    for(int i=0; i<size-1; i++)
    {
        for (int j=i+1; j<size; j++)
        {
            if(arr[i]<arr[j])//used for descending order.
            // if(arr[i]>arr[j])used for asscending order.
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    for (int i=0; i<5;i++)
    {
        cout <<arr[i]<<"  ";
    }
    cout <<endl;
} 