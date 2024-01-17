#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    a=10,b=3;
    c=++a + a++ +b++ + ++b;
    cout<<"value of a is "<<a<<endl;
        cout<<"value of b is "<<b<<endl;
            cout<<"value of c is "<<c<<endl;
                cout<<"value of a is "<<a<<endl;
}