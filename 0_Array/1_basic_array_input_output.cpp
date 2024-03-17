#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cout<<"n: ";
    cin>>n;

    int arr[n];
    //taking array input
    for (int i = 0; i < n; i++)
    {
        printf("index[%d] = ",i);
        cin>>arr[i];
    }
    //printing output from 0th index to n-1 th
    for (int j = 0; j < n; j++)
    {
        cout<<arr[j]<<" ";
    }
    return 0;
}
