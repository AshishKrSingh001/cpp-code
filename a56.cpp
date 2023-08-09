#include <iostream>
using namespace std;

void num(int &a,int &b,int &c)
{
    int gt = (a>b && a>c)?a:(b>c)?b:c;
    int st = (a<b && a<c)?a:(b<c)?b:c;
    cout<<"Greatest num: "<<gt<<endl<<"Smallest: "<<st<<endl;
}
int main()
{
    int a,b,c;
    cout<<"Enter three number: "<<endl;
    cin>>a>>b>>c;
    num(a,b,c);
}