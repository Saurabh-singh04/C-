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
     
    for(int i=0;i<10;i++)
    {if(i<5)
      c[i]=a[i];
      else
      c[i]=b[i-5];
    }
    cout<<" two array merge is ";
    for(int i=0;i<10;i++)
    {
        cout<<c[i]<<"\t";
    }
}