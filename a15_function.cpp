#include <iostream>
#include <iomanip>
using namespace std;

struct Rectangle
{
    float length,breadth;
}ab;
void input() // Non-returntype without parameter
{
    cout<<"Enter length and breadth of the rectangle:"<<endl;
    cin>>ab.length>>ab.breadth;
}
int area() // Returntype without parameter
{
    return ab.breadth*ab.length;
}
int peri() //// Returntype without parameter
{
    return 2*(ab.breadth+ab.length);
}
int main()
{
    input();
    cout<<"Area: "<<area()<<endl<<"Perimeter: "<<peri();  
    
    return 0;
}