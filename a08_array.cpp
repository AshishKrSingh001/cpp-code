#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int i,j,size;
    cout<<"Enter size of array: ";
    cin>>size;

    int arr[size]; // array declaraction;
    cout<<"Enter "<<size<<" element of array:"<<endl;
    for(i=0;i<size;i++)
    cin>>arr[i]; // array input

    // Sorting
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    // Displaying
    for(i=0;i<size;i++)
    cout<<arr[i]<<"\t";
    

    return 0;
}