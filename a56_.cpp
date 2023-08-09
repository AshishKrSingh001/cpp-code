#include <iostream>
using namespace std;
template <class t>
void gt(t *a,t &s,t &g,int  n)
{
    g=*a;
    s=*a;
    for(int i=1;i<n;i++)
    {
        if(g<*(a+i))
        {
            g=*(a+i);   
        }
        if(s>*(a+i))
        {
            s=*(a+i);
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
    //double *a=new double;
    int *a = new int;
    // float *a = new float;
     //char *a = new char;
    int n;
    cout<<"Enter size of array: "<<endl;
    cin>>n;
    Input(a,n);
    Output(a,n);
    int min,max;
    gt(a,min,max,n);
    cout<<"Greatest num: "<<max<<endl<<"Smallest num: "<<min;
    return 0;
}