#include<iostream>
using namespace std;
// 0 1 1 2 3 5 8 13
int main()
{
    int ft=0,st=1,nt,num,i=3,t;
    cout<<"enter the term";
    cin>>num;
    while(i<=num)
    {
    nt=ft+st;
 ft=st;
 st=nt;
    cout<<"\n"<<nt;
    i++;

    
    }


}