#include<iostream>
using namespace std;
int main()
{
    int a[3][3];
    cout<<"enter the data of array";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
      cout<<" the data of array\n";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<< a[i] [j];
        }cout<<"\n";
    }
}