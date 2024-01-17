#include<iostream>
using namespace std;
int main()
{
    int num,sum=0;
    cout<<"enter the number";//545
    cin>>num;
    while(num>0)
    {
       
        sum=sum+num%10;//5//4//5
        num=num/10;//54//5//0

    }
    cout<<"sum is "<<sum<<endl;
    return 0;
}