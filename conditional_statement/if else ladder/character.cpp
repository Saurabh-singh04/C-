#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"enter the character";
    cin>>ch;
    if(ch>=65&&ch<=90)
    {
        cout<<"upper case"<<endl;
    }
    else if(ch>=97&&ch<=132)
    {
        cout<<"lower case"<<endl;
    }
    else if(ch>=48&&ch<=57)
    {
        cout<<"digit "<<endl;
    }
    else 
    {
        cout<<"special symbol"<<endl;
    }
    return 0;
}