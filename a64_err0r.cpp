#include <iostream>
using namespace std;
class A
{
	public:
	double zeroDivision(int x, int y) {
  
    if (y == 0) {
        throw "Division by Zero!";
    }
    return (x / y);
}
};
  
int main() {
    int a;
    int b;
    cout<<"Enter two number: "<<endl;
    cin>>a>>b;
    double c = 0;
  	A aa;
    try {
        c = aa.zeroDivision(a, b);
        cout << c << endl;
    }
    catch (const char* message) {
        cerr << message << endl;
    }
    return 0;
}
