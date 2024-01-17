#include<iostream>
using namespace std;
int main()
{
    int num,i=2,count=0;
    cout<<"enter the number";
    cin>>num;
  for(int i=2;i<num;i++)
    {
        if(num%i==0)
        {
            count++;
        }

    }
    if(count==0)
    {
        cout<<"the number is prime"<<num<<endl;
    }
    else if(count!=0)
    {
        cout<<"the number is not prime ";
    }
}