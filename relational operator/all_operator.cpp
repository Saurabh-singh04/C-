#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "enter the value of a and b";
    cin >> a >> b;
    // leb
    cout <<" a is less than b" << (a < b) << endl;
    cout << "a is greater  than b" << (a > b) << endl;
    cout << "a is  less than equal b" << (a <= b) << endl;
    cout << " a is greater than equal b" << (a >= b) << endl;
    cout << " a is not equal b" << (a != b) << endl;
    cout << " a is equal  b" << (a == b) << endl;
    return 0;
}