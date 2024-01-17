#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char name[100];
    for(int i=0;i<5;i++)
    {
        cout<<"enter the character";
        cin>>name;
    }
    for(int i=0;i<5;i++)
    {
        cout<<" the character";
        cout<<name;
    }
    strlen(name);
    cout<<"length of the name is "<<strupr(name);
    
}