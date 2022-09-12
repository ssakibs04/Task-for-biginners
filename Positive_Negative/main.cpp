#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
    int num;
    cout<<"Enter Any Enteger Number: ";
    cin>>num;

     if(num>0)
    {
        cout<<"Positive"<<endl;

    }

      else if(num<0)
    {
        cout<<"Negative";
    }
     else
    {
        cout<<"Zero";
    }

    getch();
}
