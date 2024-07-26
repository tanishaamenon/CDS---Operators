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

    //arithmetic operators
    cout<<"Arithmetic operators: "<<endl;
    ans = a + b;
    cout<<"a + b: "<<ans<<endl;
    ans = a - b;
    cout<<"a - b: "<<ans<<endl;
    ans = a * b;
    cout<<"a * b: "<<ans<<endl;
    ans = a / b;
    cout<<"a / b: "<<ans<<endl;
    ans = a % b;
    cout<<"a % b: "<<ans<<endl;
    ans = a++;
    cout<<"a++: "<<ans<<endl;
    ans = b--;
    cout<<"b--: "<<ans<<endl;
    cout<<endl;
    
    //assignment operators
    cout<<"Assignment operators: "<<endl;
    ans = 0;
    cout<<"ans = 0: "<<ans<<endl;
    a += b;
    cout<<"a += b: "<<a<<endl;
    a -= b;
    cout<<"a -= b: "<<a<<endl;
    a *= b;
    cout<<"a *= b: "<<a<<endl;
    a /= b;
    cout<<"a /= b: "<<a<<endl;
    a %= b;
    cout<<"a %= b: "<<a<<endl;
    a ^= b;
    cout<<"a ^= b: "<<a<<endl;
    a &= b;
    cout<<"a &= b: "<<a<<endl;
    a != b;
    cout<<"a != b: "<<a<<endl;
    a >>= b;
    cout<<"a >>= b: "<<a<<endl;
    a <<= b;
    cout<<"a <<= b: "<<a<<endl;
    cout<<endl;

    //comparison operators
    cout<<"Comparison operators: "<<endl;
    ans = a < b;
    cout<<"a < b: "<<ans<<endl;
    ans = a <= b;
    cout<<"a <= b: "<<ans<<endl;
    ans = a > b;
    cout<<"a > b: "<<ans<<endl;
    ans = a >= b;
    cout<<"a >= b: "<<ans<<endl;
    ans = a == b;
    cout<<"a == b: "<<ans<<endl;
    ans = a != b;
    cout<<"a != b: "<<ans<<endl;
    cout<<endl;

    //logical operators
    cout<<"Logical operators: "<<endl;
    ans = (a < b) && (a != b);
    cout<<"(a < b) && (a != b): "<<ans<<endl;
    ans = (a==b) || (b>a);
    cout<<"(a==b) || (b>a): "<<ans<<endl;
    ans = !(a < b);
    cout<<"!(a < b): "<<ans<<endl;
    cout<<endl;

}

/*
Output:
Enter the first number: 25
Enter the another number: 56

Arithmetic operators: 
a + b: 81
a - b: -31
a * b: 1400
a / b: 0
a % b: 25
a++: 25
b--: 56

Assignment operators:
ans = 0: 0
a += b: 81
a -= b: 26
a *= b: 1430
a /= b: 26
a %= b: 26
a ^= b: 45
a &= b: 37
a != b: 37
a >>= b: 0
a <<= b: 0

Comparison operators:
a < b: 1
a <= b: 1
a > b: 0
a >= b: 0
a == b: 0
a != b: 1

Logical operators:
(a < b) && (a != b): 1
(a==b) || (b>a): 1
!(a < b): 0
*/
