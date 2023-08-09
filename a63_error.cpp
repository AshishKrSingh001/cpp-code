#include <iostream>
using namespace std;
class Rectangle
{
    private:
    double *len,*bre;
    public:
    Rectangle()
    {
        len=new double;
        bre=new double;
    }
    void input()
    {
        cout<<"Enter length and breadth of rectangle: "<<endl;
        cin>>*len>>*bre;
        if(*len<=0)
        throw "Invalid length!";
        if(*bre<=0)
        throw "Invalid Breadth!";
        
    }
    void area()
    {
        cout<<"Area of rectangle: "<<((*len)*(*bre))<<endl;
    }
    void perimeter()
    {
        cout<<"Perimeter of: "<<2*((*len)+(*bre))<<endl;
    }
    ~Rectangle()
    {
        delete len;
        delete bre;
    }
};
int main()
{
    Rectangle rec;
    try
    {
    	rec.input();
		rec.area();
    	rec.perimeter();	
	}
	catch(const char* msg)
	{
		cerr<<msg<<endl;
	}
    return 0;
}
