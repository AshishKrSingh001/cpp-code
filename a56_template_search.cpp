#include <iostream>
using namespace std;
template <class t>
void gt(t *a,int n,t s)
{
    t i;
    for(i=1;i<n;i++)
    {
        if(s==a[i])
        {
            cout<<"Found"<<endl;
            break;
        }
    }
    if(n==i)
    {
        cout<<"Not found"<<endl;
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
    double *a = new double;
    // int *a = new int;
    // float *a = new float;
    // char *a = new char;
    int n;
    cout<<"Enter size of array: "<<endl;
    cin>>n;
    Input(a,n);
    Output(a,n);
    double s;
    cout<<"Enter Searching element: "<<endl;
    cin>>s;
    gt(a,n,s);
    return 0;
}