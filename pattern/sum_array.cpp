#include<iostream>
using namespace std;
void setdata(int a[5],int n)
{
        cout<<"enter the array data";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
}

void getdata(int a[5],int n)
{int sum=0;
        cout<<" the array data";
    for(int i=0;i<n;i++)
    {
       cout<<a[i]<<"\t";
        sum=sum+a[i];
     
    }
     cout<<"sum is "<<sum;
}
int main()
{
    int a[5];
    int n=5;
    setdata(a,n);
    getdata(a,n);
    //cout<<"array is "<<a[0]<<endl<<a[1]<<endl<<a[2]<<endl<<a[4]<<endl<<a[3]<<endl;
   /*
   for(int i=0;i<5;i++)
    {
        cout<<"array data is "<<a[i]<<endl;
    }
   */
}