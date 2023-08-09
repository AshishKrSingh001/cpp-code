#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    enum meal{breakfast,lunch,dinner};
    cout<<endl<<"Meal"<<endl<<breakfast<<endl<<lunch<<endl<<dinner<<endl;

    enum color{red,white,aqua,orange,blue,black};
    cout<<endl<<"Color"<<endl<<red<<endl<<white<<endl<<aqua<<endl<<orange<<endl<<blue<<endl<<black;

    enum day{sunday,monday,tuesday,wednesday,thursday,friday,saturday};
    day d1=sunday;
    day d2=monday;
    day d3=tuesday;
    day d4=wednesday;
    day d5=thursday;
    day d6=friday;
    day d7=saturday;
    cout<<endl<<"Day"<<endl<<d1<<endl<<d2<<endl<<d3<<endl<<d4<<endl<<d5<<endl<<d6<<endl<<d7;
    return 0;
}