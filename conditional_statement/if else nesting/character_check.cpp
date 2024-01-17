#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"enter the character";
    cin>>ch;
    if(ch>=65&&ch<132)
    {
        if(ch>=65&&ch<=90)
        {
            cout<<"upper case"<<endl;
        }
        else{
            cout<<"lower case"<<endl;
        }

    }
    else{
        cout<<"not alphabate"<<endl;
    }
}