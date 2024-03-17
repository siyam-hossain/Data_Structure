#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int size, element, s_value;
    printf("size: ");
    cin>>size;

    printf("element: ");
    cin>>element;
    
    printf("searching value: ");
    cin>>s_value;

    int arr[size];

    for (int i = 1; i <= element; i++)
        cin>>arr[i];

    for (int j = 1; j <= element; j++)
    {
        if (s_value==arr[j])
        {
            printf("%d is found",s_value);
            break;
        }else{
            if(j==element)
            cout<<s_value<<" is not found";
        }
    }
    return 0;
}
