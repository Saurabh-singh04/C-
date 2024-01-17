#include<iostream>
using namespace std;
int  main()
{
    int num,digit,count=0;
    cout<<"enter the number";
    cin>>num;
    cout<<"enter the number to find frequency";
    cin>>digit;
    while(num>0)
    {
        int i=num%10;
        if(digit=num)
        {
            count++;
        }
        num=num/10;
    }
    cout<<"the number "<<num<<"have "<<count<<"frequency of number"<<digit;
    
}