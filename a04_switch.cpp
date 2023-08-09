#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number(Between 0 and 9): ";
    cin>>num;

    switch(num)
    {
        case 1:
        cout<<"Hindi"<<endl;
        break;
        case 2:
        cout<<"English"<<endl;
        break;
        case 3:
        cout<<"Bhojpuri"<<endl;
        break;
        case 4:
        cout<<"Gujrati"<<endl;
        break;
        case 5:
        cout<<"Tamil"<<endl;
        break;
        case 6:
        cout<<"Telgu"<<endl;
        break;
        case 7:
        cout<<"Bangali"<<endl;
        break;
        case 8:
        cout<<"Malayalam"<<endl;
        break;
        case 9:
        cout<<"Kannada"<<endl;
        break;
        case 0:
        cout<<"Marathi"<<endl;
        break;
        default:
        {
            cout<<"Invalid number"<<endl;
        }
    }

    return 0;
}