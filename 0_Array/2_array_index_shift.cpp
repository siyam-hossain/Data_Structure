#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cout<<"n: ";
    cin>>n;

    int arr[n];
    //taking input
    for (int idx = 1; idx <= n; idx++)
    {
        printf("\tindex %d = ",idx);
        cin>>arr[idx];
    }
    
    //output
    for (int i = 1; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
     
    cout<<arr[0];//it prints unpredictable result in my case it prints 3

    return 0;
}
/*
    The issue with the code is that it is using 1-based indexing for the array arr. In C++, arrays are 0-based, which means the first element of the array is at index 0.

    In the code, you are taking input for n elements of the array arr using a for loop that starts from index 1 and goes up to n. This means that the first n elements of the array are not initialized, and their values are undefined.

    When you try to print arr[0], you are accessing an uninitialized element of the array, which can lead to unpredictable results. In this case, it seems like the value of arr[0] is 3, but this is just a coincidence and can change with different compilers or runs of the program.
*/