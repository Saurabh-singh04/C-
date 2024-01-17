 #include<iostream>
 using namespace std;
 int main()
 {
    int num,rev=0;
    cout<<"enter the number";
    cin>>num;//345
    while(num>0)
    {
        rev=rev*10+num%10;//5//4//3

        num=num/10;//34//3//0
    }
    cout<<"reverse of the number "<<rev<<endl;
 }
