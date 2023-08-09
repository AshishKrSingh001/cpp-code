#include <iostream>
#include <iomanip>
using namespace std;

void swapping(int* a,int* b)
{
    *a=*a-*b;
    *b=*a+*b;
    *a=*b-*a;
    cout<<"After swapping"<<endl<<"a="<<*a<<endl<<"b="<<*b<<endl<<endl;
}
int main()
{
    int x=10,y=20;
    cout<<endl<<"Before calling"<<endl<<"x="<<x<<endl<<"y="<<y<<endl<<endl;
    swapping(&x,&y);
    cout<<"After calling"<<endl<<"x="<<x<<endl<<"y="<<y<<endl;
    return 0;
}