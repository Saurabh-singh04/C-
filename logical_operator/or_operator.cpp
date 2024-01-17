#include<iostream>
using namespace std;
int main()
{
    // if all the only one condition is true then we got 1 
    int a,b;
    cout<<"enter the value of a and b";
    cin>>a>>b;
    cout<<((a>b)||(a==b))<<endl;
    return 0;
}