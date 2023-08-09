#include <iostream>
#include <iomanip>
using namespace std;

union Rectangle
{
    float length,breadth;
    int peri,arr;
};
int main()
{
    union Rectangle s;
    s.arr=10;
    s.breadth=20;
    s.length=30;
    s.peri=40;
    cout<<"length: "<<s.length<<endl<<"Breadth: "<<s.breadth<<endl;
    cout<<"Area of the rectangle: "<<s.arr<<endl<<"Perimeter of rectangle: "<<s.peri;
    return 0;
}