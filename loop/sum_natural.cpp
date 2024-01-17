#include<iostream>
using namespace std;
int main()
{
    int i=1,n,sum=0;
    cout<<"enter the number ";
    cin>>n;
    while(i<=n)
    {
        cout<<i<<"\n";
        sum=sum+i;
        i++;
    }
    cout<<"sum of natural number is "<<sum<<endl;
}