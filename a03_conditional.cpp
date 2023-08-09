#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int unit,bill=0;
    cout<<"Enter the unit of this month: ";
    cin>>unit;

    if(unit>0 && unit<=300)
    {
        bill = 0;
    }
    else if(unit>300 && unit<=500)
    {
        bill = (unit-300)*8;
    }
    else if(unit>500 && unit<=750)
    {
        bill = (unit-500)*10+(unit-300)*8;
    }
    if(unit>750 && unit<=1000)
    {
        bill = (unit-750)*12+(unit-500)*10+(unit-300)*8;
    }
    else
    {
        bill = (unit-1000)*15+(unit-750)*12+(unit-500)*10+(unit-300)*8;
    }
    cout<<"Your bill amout is:"<<setw(2)<<bill<<endl;

    return 0;
}