#include <iostream>
using namespace std;
int main()
{
    int num, sum = 0, r, num1;
    cout << "enter the number";
    cin >> num;
    num1=num;
      for(num=101;num<=edno;num++)
    {while (num > 0)
    {
        r = num % 10;
        sum = sum + r * r * r;
        num = num / 10;
    }
    cout << "the sum of cubes of number is " << sum;
    if (num1 == sum)
    {
        cout << "number is armstrong " << sum;
    }}
    
    return 0;
}