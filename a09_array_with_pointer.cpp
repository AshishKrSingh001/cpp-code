#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int i,j,size;
    cout<<"Enter size of array: ";
    cin>>size;

    int arr[size]; // array declaraction;
    int* p=arr;
    cout<<"Enter "<<size<<" element of array:"<<endl;
    for(i=0;i<size;i++)
    cin>>*(p+i); // array input

    // Sorting
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = *(p+j);
                *(p+j) = *(p+j+1);
                *(p+j+1) = temp;
            }
        }
    }
    // Displaying
    for(i=0;i<size;i++)
    cout<<*(p+i)<<"\t";
    

    return 0;
}