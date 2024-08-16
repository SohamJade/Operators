#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter a number: ";
    cin>>a;
    cout<<"Enter a number: ";
    cin>>b;

    if(a>=0 && b>=0)
    {
        cout<<"It is in 1st quadrant.";
    }
    else if(a<0 && b>=0)
    {
        cout<<"It is in 2nd quadrant.";
    }
    else if(a<0 && b<0)
    {
        cout<<"It is in 3rd quadrant.";
    }
    else
    {
        cout<<"It is in 4th quadrant";
    }
}

/*Enter a number: 5
Enter a number: -5
It is in 4th quadrant

Enter a number: -8
Enter a number: -9
It is in 3rd quadrant.*/
