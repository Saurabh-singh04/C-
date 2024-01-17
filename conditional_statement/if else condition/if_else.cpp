#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "enter the value of a and b";
    cin >> a >> b;
    if (a < b)//when true condition
    {
        cout << "b is big i.e"<<b << endl;
    }
    else//for false condition
    {
        cout << "a is greater number i.e " << a<< endl;
    }
    return 0;
}
