#include<iostream>
using namespace std;
int main()
{
    int num,i=1,table=1;
    cout<<"enter the number ";
    cin>>num;
    for(int i=1;i<=10;i++)
    {
        table=i*num;
        cout<<"table of "<<num<<"is "<<table<<endl;
    }
    

}