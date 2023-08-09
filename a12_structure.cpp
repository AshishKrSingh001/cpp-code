#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

struct Rectangle
{
    float length,breadth;
    int peri,arr;
}ab;

typedef struct circle
{
    int radius;
    float circum,area;
}abcd;
int main()
{
    // First way
    cout<<"Enter length and breadth of the rectangle:"<<endl;
    cin>>ab.length>>ab.breadth;    
    ab.peri=2*(ab.breadth+ab.length);
    ab.arr=ab.breadth*ab.length;
    cout<<"length: "<<ab.length<<endl<<"Breadth: "<<ab.breadth<<endl;
    cout<<"Area of the rectangle: "<<ab.arr<<endl<<"Perimeter of rectangle: "<<ab.peri<<endl;
    cout<<endl;

    // Second way
    struct Rectangle abc;
    cout<<"Enter length and breadth of the rectangle:"<<endl;
    cin>>abc.length>>abc.breadth;    
    abc.peri=2*(abc.breadth+abc.length);
    abc.arr=abc.breadth*abc.length;
    cout<<"length: "<<abc.length<<endl<<"Breadth: "<<abc.breadth<<endl;
    cout<<"Area of the rectangle: "<<abc.arr<<endl<<"Perimeter of rectangle: "<<abc.peri<<endl;
    cout<<endl;

    // Third way
    abcd a;
    cout<<"Enter radius of the circle:";
    cin>>a.radius;
    a.circum=2*M_PI*a.radius;
    a.area=M_PI*pow(a.radius,2);
    cout<<"Area of the circle: "<<a.area<<endl<<"Circumference of the circle: "<<a.circum<<endl;
    cout<<endl;

    struct circle c;
    cout<<"Enter radius of the circle:";
    cin>>c.radius;
    c.circum=2*M_PI*c.radius;
    c.area=M_PI*pow(c.radius,2);
    cout<<"Area of the circle: "<<c.area<<endl<<"Circumference of the circle: "<<c.circum<<endl;
    cout<<endl;
    
    return 0;
}