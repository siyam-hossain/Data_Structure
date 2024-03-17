#include<iostream>
using namespace std;

int main()
{
    int n;
    
    printf("n: ");
    cin>>n;

    int arr[n];
    for (int i = 0; i < n ; i++)
    {
        printf("index[%d] = ",i);
        cin>>arr[i];
    }
    
    int mid,start,end;

    start=0;
    end=n-1;
    
    int search_value;
    printf("Search value: ");
    cin>>search_value;

    while (start<=end)
    {
        mid=(start+end)/2;

        if (search_value==arr[mid])
        {
            cout<<search_value<<" found at "<<mid+1<<" position";
            break;
        }
        else if (arr[mid]<search_value)
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }
    if(start>end)
    {
        cout<<"Value not found";
    }
    return 0;
}