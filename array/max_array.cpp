#include<iostream>
using namespace std;
void setdata(int a[5],int size)
{
    cout<<"enter the array data";
    for(int i=0;i<5;i++)
    {

    
    cin>>a[i];
    }
}
 void maxdata(int a[5],int size)
{int m=a[0];
    for(int i=0;i<5;i++)
    {
        cout<<a[i];
        if(m<a[i])
        {
            m=a[i];
        }
    }
    cout<<"max element is "<<m;
}
int main()
{
    int a[5];
    int n=5;
    setdata(a,n);
    maxdata(a,n);
}