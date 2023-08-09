#include <iostream>
using namespace std;

class rectangle
{
    protected:
    int len;
    
};
class operation:public rectangle
{
    private:
    int bre;
    public:
    void breadth(int x,int y)
    {
        this->bre = y;
        this->len = x;
    }
    void print()
    {
        cout<<"Area: "<<len*bre<<"\nParemeter: "<<2*(len+bre);
    }
};

int main()
{
   // rectangle len(10);
    operation bra;
    bra.breadth(10,20);
    bra.print();

    return 0;
}