#include <iostream>
#include <stdio.h>
using namespace std;

class Example
{
    public:
    //void greatest_num(int a,int b=0,int c=0,int d=0);
    void greatest_num(int a=0,int b=0,int c=0,int d=0)
    {
        int gt = (d>a && d>b && d>c)?d:(a>b && a>c)?a:(b>c)?b:c;
        cout<<"Greatest number : "<<gt<<endl;
    }
};
// void Example::greatest_num(int a,int b=0,int c=0,int d=0)
// {
//     int gt = (d>a && d>b && d>c)?d:(a>b && a>c)?a:(b>c)?b:c;
//     cout<<"Greatest number : "<<gt<<endl;
// }

int main()
{
    Example gt;
    gt.greatest_num(10,20,30,40);
    gt.greatest_num(10,20,30);
    gt.greatest_num(10,20);
    gt.greatest_num(10);
    gt.greatest_num();
    return 0;
}