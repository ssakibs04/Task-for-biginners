#include<iostream>
using namespace std;
int main()
{
    float cel;
    float far;


    cout<<"Enter the temperature in celsius :: ";
    cin>>cel;
    far=(1.8 * cel) + 32.0;
    cout<<"The temperature in fahrenheit:: "<<far<<endl;



    return 0;
}
