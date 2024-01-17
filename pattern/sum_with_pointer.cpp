#include<iostream>
using namespace std;
void sum(int *a,int *b)
{
    // cout<<"enter the value of a and b ";
    // cin>>a>>b;
    cout<<*a+*b;
}
int main()
{int *a,*b;
int c=10,d=98;
a=&c;b=&d;
    
    sum(a,b);
}