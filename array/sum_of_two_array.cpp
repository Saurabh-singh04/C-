#include<iostream>
using namespace std;
int main()
{
    int a[5],b[5],c[10];
    cout<<"enter the array for first";
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
      cout<<"enter the array for second";
    for(int i=0;i<5;i++)
    {
        cin>>b[i];
    }
     
    for(int i=0;i<5;i++)
    {
      c[i]=a[i]+b[i];
    }
    cout<<"the sum of two array is ";
    for(int i=0;i<5;i++)
    {
        cout<<c[i]<<endl;
    }
}