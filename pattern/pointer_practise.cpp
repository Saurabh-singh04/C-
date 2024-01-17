#include<iostream>
using namespace std;
void setdata(int *ptr)
{
    for(int i=0;i<5;i++)
    {
        cout<<"enter the array data";
        cin>>*ptr;
        ptr++;
    }
}
void getdata(int *ptr)
{
    for(int i=0;i<5;i++)
    {
        cout<<"enter the array data\n";
        cout<<*ptr;
        ptr++;
    }
}
int main()
{
    int a[5];
    setdata(a);
    getdata(a);
   
}
