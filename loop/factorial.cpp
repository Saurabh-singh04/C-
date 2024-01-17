#include<iostream>
using namespace std;
int main()
{
    int num,fac=1;
    cout<<"enter the number";
    cin>>num;//5
    for(int i=num;i>=1;i--)
    {
        fac=fac*i;
    }cout<<fac;
}