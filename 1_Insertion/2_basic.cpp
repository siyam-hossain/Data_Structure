#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int size, element, in_pos;
    printf("size: ");
    cin>>size;
    printf("element: ");
    cin>>element;
    

    int arr[size];
    for (int i = 1; i <= element; i++)
    {
        cin>>arr[i];
    }
    element++;

    printf("insert position: ");cin>>in_pos;
    for (int j = element; j >= in_pos ; j--)
    {
        arr[j+1]=arr[j];
    }

    printf("insert value: ");cin>>arr[in_pos];
    for (int k = 1; k <= element; k++)
    {
        cout<<arr[k]<<" ";
    }
    return 0;
}
