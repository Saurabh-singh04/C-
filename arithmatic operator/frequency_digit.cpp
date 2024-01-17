#include<iostream>
using namespace std;
int main()
{
    int num,fre,count=0;
    cout<<"enter the number and find frequency of the digit";
    cin>>num>>fre;
    while(num>0)
    {
        int i=num%10;
        if(i==fre)
        {
            count++;
        }
        num=num/10;
    }
    cout<<"frequency of the nuber is"<<count;
}