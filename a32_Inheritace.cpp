#include <iostream>
#include <string>
using namespace std;

class Drug
{
    protected:
        string drug;
};
class Tablet:protected Drug
{
    protected:
        string tablet;
};
class Painkiller:private Tablet
{
    private:
        string painkiller;
    public:
        Painkiller(string name1,string name2,string name3)
        {
            drug.assign(name1);
            tablet.assign(name2);
            painkiller.assign(name3);
        }
        ~Painkiller()
        {
            cout<<"Drug name: "<<drug<<endl<<"Tablet name: "<<tablet<<endl<<"Painkiller name: "<<painkiller<<endl;
        }
};
int main()
{
    Painkiller pk("Tablet","Painkiller","Xyz");
    return 0;
}