#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int size, element, del_pos;

    printf("size: ");
    cin>>size;
    printf("element: ");
    cin>>element;
    
    int arr[size];

    for (int i = 1; i <= element; i++)cin>>arr[i];
    
    printf("Delete position: ");cin>>del_pos;

    for (int j = del_pos; j <= element-1; j++) arr[j]=arr[j+1];
    element--;

    for (int k = 1; k <=element; k++) cout<<arr[k]<<" ";
    return 0;
}
