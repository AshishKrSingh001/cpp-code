#include <iostream>
using namespace std;

class test
{
    public:
    int num;
    void input()
    {
        num=10;
    }
    private:
    int x,y;
    public:
    void input(int x,int y)
    {
        (*this).x=x;
        this->y=y;
    }
    void show();
   
};
void test :: show()
    {
        cout<<"Value of X and Y: "<<endl<<x<<endl<<y;
    }

int main()
{
    test t;
    t.input();
    cout<<t.num;

    //t.show();

    //cout<<"\nValue of X:"<<t.x; //->cant't be accessable because of private scope; 
    return 0;
}