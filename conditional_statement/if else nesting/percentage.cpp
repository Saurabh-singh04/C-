#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter the number";
    cin>>num;
   float percent;
    percent=num/150.0*100;
    cout<<"percent is "<<percent<<endl;
if(percent>60)
{
    cout<<"first division"<<endl;
}
else
{
    if(percent<60&&percent>33)
    {
        cout<<"second division"<<endl;
    }
    else{
        cout<<"third division";
    }
}
}