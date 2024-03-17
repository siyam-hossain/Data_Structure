#include<iostream>
using namespace std;

int array_init();
int array_input(int arr[]);
int insertion(int arr[], int element);
int insertion_out(int arr[],int element);

int main(int argc, char const *argv[])
{
    array_init();
    return 0;
}

int array_init()
{
    int size;
    printf("Enter size: ");
    cin>>size;

    int arr[size];
    array_input(arr);
}

int array_input(int arr[])
{
    int element;
    printf("Enter number of element: ");
    cin>>element;

    for (int index = 1; index <= element; index++)
    {
        printf("\t index[%d]= ",index);
        cin>>arr[index];
    }
    element++;
    insertion(arr, element);
}

int insertion(int arr[], int element)
{
    int in_pos, in_value;
    printf("Enter insert position: ");
    cin>>in_pos;
    printf("Enter insert value: ");
    cin>>in_value;

    for (int i = element; i >= in_pos; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[in_pos]=in_value;
    insertion_out(arr,element);
}

int insertion_out(int arr[],int element)
{
    for (int j = 1; j <= element; j++)
    {
        cout<<arr[j]<<" ";
    }
}
