#include<iostream>
using namespace std;
int main()
{
    int num,product=1,dig;
    cout<<"enter the number";//545
    cin>>num;
    while(num>0)
    {
       
       
          
          dig=num%10; /*get digit*/
        
          product*=num%10;
         num=num/10;}
          cout<<"product is "<<product <<endl;
   

    }
 