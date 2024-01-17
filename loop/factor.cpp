#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter the number";
    cin>>num;
for(int i=2;i<=num;i++)
{
    if(num%i==0)
    {
        cout<<"factor of the number is "<<i;
    }
  
}
return 0;
}