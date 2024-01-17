#include<iostream>
using namespace std;
int main()
{
int r,c,tr,tc;
cout<<"enter the tr and tc";
cin>>tr>>tc;
for(int r=1;r<=tr;r++)
{
    for(int c=1;c<=tc;c++)
    {
       for(int sp=tr-1;sp>0;sp--)
       {
        cout<<" ";
       } 
       cout<<"*"<<endl;
       
    }
}
}