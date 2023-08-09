#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    // datatype;
    int a = 10,e = 3;
    float b = 1.22;
    double c = 1.222222222;
    char d = '$';

    // sizeof operator;
    cout<<"Size of "<<a<<": "<<sizeof(a);
    cout<<"\nSize of "<<b<<": "<<sizeof(b);
    cout<<"\nSize of "<<c<<": "<<sizeof(c);
    cout<<"\nSize of "<<d<<": "<<sizeof(d);

    // typecasting;
    cout<<"\nDivision of "<<a<<" and "<<b<<": "<<a/int(b);
    cout<<"\nDivision of "<<a<<" and "<<b<<": "<<float(a)/e;
    cout<<"\nDivision of "<<a<<" and "<<b<<": "<<a/e<<endl;

    // reference variable
    float x = 455;
    float &y = x;
    cout<<y<<endl;
    cout<<x<<endl;

    // const;
    const int z = 10;
    // z++; not applied;
    cout<<z;
    
    // manipulaters (setw:(Used to display space)and endl:(Used to change the line));
    a = 2,b = 40,c = 1233;
    cout<<"The value of a is:"<<setw(5)<<a<<endl;
    cout<<"The value of a is:"<<a<<endl;

    cout<<"The value of b is:"<<setw(5)<<b<<endl;
    cout<<"The value of b is:"<<b<<endl;

    cout<<"The value of b is:"<<setw(5)<<c<<endl;
    cout<<"The value of b is:"<<c<<endl;

    return 0;
}