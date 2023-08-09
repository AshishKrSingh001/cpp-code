#include <iostream>
using namespace std;
template <class t>
t st(t &a,int n)
{
    t g=a;
    for(int i=1;i<n;i++)
    {
        if(a>(a+i))
        {
            g=(a+i);
        }
    }
    return g;
}
template <class t>
t gt(t &a,int  n)
{
    t g=a;
    for(int i=1;i<n;i++)
    {
        if(a<(a+i))
        {
            g=(a+i);   
        }
    }
    return g;
}
template <class t>
void Input(t &a,int n)
{
    cout<<"Enter element of array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>*(a+i);
    }
}
template <class t>
void Output(t &a,int n)
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
    //double *a=new double;
    int *a = new int;
    // float *a = new float;
     //char *a = new char;
    int n;
    cout<<"Enter size of array: "<<endl;
    cin>>n;
    Input(a,n);
    Output(a,n);
    cout<<"Greatest num: "<<gt(a,n)<<endl;
    cout<<"Smallest num: "<<st(a,n)<<endl;
    return 0;
}