#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    cout<<"Odd number upto 90 "<<endl;
    for(int i=1;i<=100;i++)
    {
        if(i%2==0)
        continue; // Used to skip one iteration;
        if(i>=90)
        break; // Use to break the loop;
        cout<<i<<endl;
        
    }
}