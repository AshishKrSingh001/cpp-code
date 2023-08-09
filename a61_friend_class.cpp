#include <iostream>
using namespace std;

class A
{
    private:
    double len,bre;
    public:
    A()
    {
        cout<<"Enter length and breadth: "<<endl;
        cin>>len>>bre;
    }
    friend class B;
};
class B
{
    private:
    double ar,peri;
    public:
    B(A &z)
    {
        ar = z.len*z.bre;
        peri = 2*(z.len+z.bre);
    }
    void show(A &z)
    {
        cout<<"Length:\t\t"<<z.len<<endl<<"Breadth:\t"<<z.bre<<endl<<"Area:\t\t"<<ar<<endl<<"Perimeter:\t"<<peri<<endl;
    }
};
int main()
{
    A a;
    B b(a);
    b.show(a);
    return 0;
}