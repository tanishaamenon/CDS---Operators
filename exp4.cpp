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