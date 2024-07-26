#include <iostream>
using namespace std; 

int main()
{
    int a,b,ans;
    float ansd;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the another number: ";
    cin>>b;
    cout<<endl;

    //bitwise operators
    cout<<"Bitwise operators: "<<endl;
    ans = a & b;
    cout<<"a & b: "<<ans<<endl;
    ans = a | b;
    cout<<"a < b: "<<ans<<endl;
    ans = a ^ b;
    cout<<"a ^ b: "<<ans<<endl;
    ans = ~(a & b);
    cout<<"~(a & b): "<<ans<<endl;
    ans = a >> b;
    cout<<"a >> b: "<<ans<<endl;
    ans = a << b;
    cout<<"a << b: "<<ans<<endl;
    cout<<endl;

}

/*
Output:
Enter the first number: 25
Enter the another number: 56

Bitwise operators:
a & b: 24
a < b: 57
a ^ b: 33
~(a & b): -25
a >> b: 0
a << b: 419430400
*/
