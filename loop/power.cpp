// #include<bis/stdc++.h>
#include<iostream>

using namespace std;

int main()
{
int num,pow=1,i=1,res=1;
cout<<"enter the number";
cin>>num;//4
cout<<"enter the power";
cin>>pow;//2
while(i<=pow)
{
res=num*res;
i++;
}
cout<<"power of the number is "<<res;


}