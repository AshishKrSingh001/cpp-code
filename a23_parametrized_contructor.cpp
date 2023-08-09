#include <iostream>
using namespace std;
class greatest_num
{
    public:
    greatest_num(int a,int b=0,int c=0)
    {
        int gt = (a>b && a>c)?a:(b>c)?b:c;
        cout<<"Greatest number is: "<<gt<<endl;
    }

    greatest_num(float a,float b,float c);
    greatest_num(float b,float c);
    greatest_num(double a,double b,double c);
    greatest_num(double b,double c);

};
    greatest_num::greatest_num(float a,float b,float c)
    {
        float gt = (a>b && a>c)?a:(b>c)?b:c;
        cout<<"Greatest number is: "<<gt<<endl;
    }
    greatest_num::greatest_num(float b,float c)
    {
        float gt = (b>c)?b:c;
        cout<<"Greatest number is: "<<gt<<endl;
    }
    greatest_num::greatest_num(double a,double b,double c)
    {
        double gt = (a>b && a>c)?a:(b>c)?b:c;
        cout<<"Greatest number is: "<<gt<<endl;
    }
    greatest_num::greatest_num(double b,double c)
    {
        double gt = (b>c)?b:c;
        cout<<"Greatest number is: "<<gt<<endl;
    }



int main()
{
    greatest_num gt1(7,2,5);
    greatest_num gt2(7,2);
    greatest_num(7);
    // greatest_num gt3(7.2f,8.5f);
    // greatest_num gt4(7.2f,8.5f,2.22f);
    // greatest_num gt5(7.22222222222,8.99999999999999);
    // greatest_num gt6(7.5555555555,2.888888888888,5.6666666666666);
    return 0;

}