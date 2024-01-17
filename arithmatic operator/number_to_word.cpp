#include<iostream>
using namespace std;
int main()
{
    int num,n=0;
    cout<<"enter the number";
    cin>>num;
    while(num!=0)
    {
        n=(n*10)+num%10;
        num=num/10;
    }
    while(num!=0)
    {
        switch(num%10)
        {
             case 0: 
                cout<<"zero";
                break;
            case 1: 
     cout<<"One ";
                break;
            case 2: 
                cout<<"Two ";
                break;
            case 3: 
    cout<<"Three ";
                break;
            case 4: 
                cout<<"Four ";
                break;
            case 5: 
    cout<<"Five ";
                break;
            case 6: 
                cout<<"Six ";
                break;
            case 7: 
    cout<<"Seven ";
                break;
            case 8: 
     cout<<"Eight ";
                break;
            case 9: 
     cout<<"Nine ";
                break;
                
        }
        num=num/10;
    }
   

}