#include <iostream>
using namespace std;

template <class t>
void Sorting(t a[],int n)
{
    int  i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=i;j<n;j++)
        {
            if(a[i]>a[j])
            {
                t temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    } 
    
}
template <class t>
void Input(t *a,int n)
    {
        cout<<"Enter element of array: "<<endl;
        for(int i=0;i<n;i++)
        {
            cin>>*(a+i);
        }
    }
template <class t>
void Output(t *a,int n)
{
    cout<<"Array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<*(a+i)<<"\t";
    }
    cout<<endl;
}
int main()
{
    int n;
    cout<<"Enter size of array: "<<endl;
    cin>>n;

    //int *a = new int;
    // float *a = new float;
    // char *a = new char;
    double *a = new double;

    Input(a,n);
    Output(a,n);
    Sorting(a,n);
    Output(a,n);
    
    return 0;
}