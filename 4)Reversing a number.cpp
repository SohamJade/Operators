#include<iostream>
using namespace std;

int main()
{
    int prn,a;

    cout<<"Enter yout prn: ";
    cin>>prn;

    while(prn>0)
    {
        a = prn%10;         //modulus of the input by 10 and storing the result in a.
        prn = prn/10;       //dividing the remaining number by 10 and storing it again in the input prn.
        cout<<a;
    }
}

/*Enter yout prn: 23070
07032

Enter yout prn: 123065
560321*/
