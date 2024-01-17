 #include<iostream>
using namespace std;
int main()
{
    int num,fd,ld,sum=0;
    cout<<"enter the number";
    cin>>num;//5543
    fd=num%10;//3
    while(num>=10)
    {
        num=num/10;
    }
    ld=num;
    sum=fd+ld;
    
    cout<<"first and last digit is"<<fd  << "and"<< ld<<"respective"<<endl;
    cout<<"sum of first and last digit is "<<sum<<endl;
 
}
 