#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    //table
    int num,i;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<endl<<endl;

    // do-while loop
    cout<<"Table of "<<num<<" using d0-while loop"<<endl;;
    i=1;
    do
    {
        cout<<num<<" X "<<i<<" = "<<num*i<<endl;
        i++;
    } while (i<=10);
    cout<<endl<<endl;

    // while loop
    cout<<"Table of "<<num<<" using while loop"<<endl;;
    int j=1;
    while (j<=10)
    {
        cout<<num<<" X "<<j<<" = "<<num*j<<endl;;
        j++;
    }
    cout<<endl<<endl;

    // for loop
    cout<<"Table of "<<num<<" using for loop"<<endl;;
    for(int k=1;k<=10;k++)
    {
        cout<<num<<" X "<<k<<" = "<<num*k<<endl;;
    }
    
    return 0;
}