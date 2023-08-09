#include <iostream>
using namespace std;
template <class t>
t gt(t a,t b,t c)
{
    return ((a>b && a>c)?a:(b>c)?b:c);
}
int main()
{
    cout<<gt(10,20,123)<<endl;
    cout<<gt(10.2,20.3,55.5)<<endl;
    cout<<gt(10.2f,20.888f,555.4f)<<endl;
    cout<<gt('A','1','a')<<endl;
    return 0;
}