# Experiment 3 and 4
**Experiment 3** <br>
<br>
**Aim:** <br>
To study and implement Operators in C++.<br>
<br>
**Theory:** <br>
In C++, operators are special symbols that perform operations on operands. They are categorized into various types based on their functionality:<br>
<br>
_Arithmetic Operators:_ Used to perform mathematical operations.<br>
•	+ &#8594; Addition <br>
•	- &#8594; Subtraction <br> 
•	* &#8594; Multiplication <br>
•	/ &#8594; Division <br>
•	% &#8594; Modulus <br>
•	++ &#8594; Increment <br>
•	-- &#8594; Decrement <br>
<br>
_Relational Operators:_ Used to compare two values.<br>
•	== &#8594; Equal to (this compares if the two are equal to each other and does not assign) <br>
•	!= &#8594; Not equal to <br>
•	> &#8594; Greater than <br>
•	< &#8594; Less than <br>
•	>= &#8594; Greater than or equal to <br>
•	<= &#8594; Less than or equal to <br>
<br>
_Logical Operators:_ Used to combine conditional statements.<br>
•	&& &#8594; Logical AND <br> 
•	|| &#8594; Logical OR <br>
•	! &#8594; Logical NOT <br>
<br>
_Assignment Operators:_ Used to assign values to variables. <br>
•	= &#8594; Assignment <br>
•	+= &#8594; Add and assign <br>
•	-= &#8594; Subtract and assign <br>
•	*= &#8594; Multiply and assign <br>
•	/= &#8594; Divide and assign <br>
•	%= &#8594; Modulus and assign <br>
<br>
**Code:** <br>
<br>

```
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
 
```

**Outputs:**  <br>

![exp3pt1 output](https://github.com/tanishaamenon/CDS---Operators/blob/main/exp3pt1.JPG) <br>
![exp3pt2 output](https://github.com/tanishaamenon/CDS---Operators/blob/main/exp3pt2.JPG) <br>
<br>
**Conclusion:** <br>
&#8594; We learnt different operators in C++. <br>
&#8594; We learnt the use case of the operators in C++. <br>
*******
<br> 

**Experiment 4** <br>
<br>
**Aim:** <br>
To study and implement C++ Bitwise Operators.<br>
<br>
**Theory:** <br>
In C++, operators are special symbols that perform operations on operands. They are categorized into various types based on their functionality:<br>
<br>
_Bitwise Operators:_ Operate on bits and perform bit-level operations. <br>
•	& &#8594; Bitwise AND <br>
•	| &#8594; Bitwise OR <br>
•	^ &#8594; Bitwise XOR <br>
•	~ &#8594; Bitwise NOT <br>
•	<< &#8594; Left shift <br>
•	>> &#8594; Right shift <br>
<br>
**Code:** <br>

```
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
```
**Outputs:** <br>
![exp4 output](https://github.com/tanishaamenon/CDS---Operators/blob/main/exp4.JPG)
<br>
**Conclusion:** <br>
&#8594; We learnt different bitwise operators in C++. <br>
&#8594; We learnt the use case of these operators in C++. <br>
*******
<br> 

