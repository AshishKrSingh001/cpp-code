#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a=10; // Variable;
    cout<<"Value of a: "<<a<<endl;
    cout<<"Address of a: "<<&a<<endl;


    int* b=&a; // Pointer variable;
    cout<<"Value of b: "<<*b<<endl;
    cout<<"Address of b: "<<b<<endl;

    int** c=&b; // Pointer to pointer variable;
    cout<<"Value of c: "<<**c<<endl;
    cout<<"Address of c: "<<*c<<endl;

    return 0;
}