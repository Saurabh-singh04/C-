#include<iostream>
using namespace std;
int main()
{
    int num,count=0,rem;
    cout<<"enter the number";//545
    cin>>num;
    while(num!=0)
    {
    num=num/10;
      count++;
    }
    cout<<"no of count is "<<count;
}