#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int i,j,row,col;
    cout<<"Enter row and column of matrix:"<<endl;
    cin>>row>>col;

    int arr[row][col]; // matrix declaraction;
    int* p=&arr[0][0];
    cout<<"Enter "<<row*col<<" element of matrix:"<<endl;
    for(i=0;i<row;i++)
    for(j=0;j<col;j++)
    cin>>*(p+i*col+j); // matrix input;
    cout<<endl;

    cout<<"Matrix is:"<<endl;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cout<<*(p+i*col+j)<<"\t"; // matrix output;
        }
        cout<<endl;
    } 

    

    return 0;
}