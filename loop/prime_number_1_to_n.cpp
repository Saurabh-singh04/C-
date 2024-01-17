#include<iostream>
using namespace std;
int main()
{
    int num,i=1,count=0,j=2;
    cout<<"enter the number";
    cin>>num;
  while(j<=num)
  {i=2;
    while(i<j)
    {
        if(j%i==0)
        {
            count++;
        }
        i++;
    }
 if(count==0)
 {
    cout<<"the prime no is\t "<<j;
 }
 j++;
  }
}