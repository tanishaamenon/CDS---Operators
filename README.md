# Experiment 3 and 4
**Aim:** <br>
- To study and implement Operators in C++.<br>
- To study and implement C++ Bitwise Operators.<br>
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
_Bitwise Operators:_ Operate on bits and perform bit-level operations. <br>
•	& &#8594; Bitwise AND <br>
•	| &#8594; Bitwise OR <br>
•	^ &#8594; Bitwise XOR <br>
•	~ &#8594; Bitwise NOT <br>
•	<< &#8594; Left shift <br>
•	>> &#8594; Right shift <br>
<br>
**Code:** <br>
experiment - 3<br>
*#include <iostream><br>
using namespace std; <br>
<br>
int main()<br>
{<br>
    int a,b,ans;<br>
    float ansd;<br>
    cout<<"Enter the first number: ";<br>
    cin>>a;<br>
    cout<<"Enter the another number: ";<br>
    cin>>b;<br>
    cout<<endl;<br>
<br>
    //arithmetic operators<br>
    cout<<"Arithmetic operators: "<<endl;<br>
    ans = a + b;<br>
    cout<<"a + b: "<<ans<<endl;<br>
    ans = a - b;<br>
    cout<<"a - b: "<<ans<<endl;<br>
    ans = a * b;<br>
    cout<<"a * b: "<<ans<<endl;<br>
    ans = a / b;<br>
    cout<<"a / b: "<<ans<<endl;<br>
    ans = a % b;<br>
    cout<<"a % b: "<<ans<<endl;<br>
    ans = a++;<br>
    cout<<"a++: "<<ans<<endl;<br>
    ans = b--;<br>
    cout<<"b--: "<<ans<<endl;<br>
    cout<<endl;<br>
    <br>
    //assignment operators<br>
    cout<<"Assignment operators: "<<endl;<br>
    ans = 0;<br>
    cout<<"ans = 0: "<<ans<<endl;<br>
    a += b;<br>
    cout<<"a += b: "<<a<<endl;<br>
    a -= b;<br>
    cout<<"a -= b: "<<a<<endl;<br>
    a *= b;<br>
    cout<<"a *= b: "<<a<<endl;<br>
    a /= b;<br>
    cout<<"a /= b: "<<a<<endl;<br>
    a %= b;<br>
    cout<<"a %= b: "<<a<<endl;<br>
    a ^= b;<br>
    cout<<"a ^= b: "<<a<<endl;<br>
    a &= b;<br>
    cout<<"a &= b: "<<a<<endl;<br>
    a != b;<br>
    cout<<"a != b: "<<a<<endl;<br>
    a >>= b;<br>
    cout<<"a >>= b: "<<a<<endl;<br>
    a <<= b;<br>
    cout<<"a <<= b: "<<a<<endl;<br>
    cout<<endl;<br>
<br>
    //comparison operators<br>
    cout<<"Comparison operators: "<<endl;<br>
    ans = a < b;<br>
    cout<<"a < b: "<<ans<<endl;<br>
    ans = a <= b;<br>
    cout<<"a <= b: "<<ans<<endl;<br>
    ans = a > b;<br>
    cout<<"a > b: "<<ans<<endl;<br>
    ans = a >= b;<br>
    cout<<"a >= b: "<<ans<<endl;<br>
    ans = a == b;<br>
    cout<<"a == b: "<<ans<<endl;<br>
    ans = a != b;<br>
    cout<<"a != b: "<<ans<<endl;<br>
    cout<<endl;<br>
<br>
    //logical operators<br>
    cout<<"Logical operators: "<<endl;<br>
    ans = (a < b) && (a != b);<br>
    cout<<"(a < b) && (a != b): "<<ans<<endl;<br>
    ans = (a==b) || (b>a);<br>
    cout<<"(a==b) || (b>a): "<<ans<<endl;<br>
    ans = !(a < b);<br>
    cout<<"!(a < b): "<<ans<<endl;<br>
    cout<<endl;<br>
<br>
}<br>*
<br>
experiment - 4<br>
*#include <iostream><br>
using namespace std; <br>
<br>
int main()<br>
{<br>
    int a,b,ans;<br>
    float ansd;<br>
    cout<<"Enter the first number: ";<br>
    cin>>a;<br>
    cout<<"Enter the another number: ";<br>
    cin>>b;<br>
    cout<<endl;<br>
<br>
    //bitwise operators<br>
    cout<<"Bitwise operators: "<<endl;<br>
    ans = a & b;<br>
    cout<<"a & b: "<<ans<<endl;<br>
    ans = a | b;<br>
    cout<<"a < b: "<<ans<<endl;<br>
    ans = a ^ b;<br>
    cout<<"a ^ b: "<<ans<<endl;<br>
    ans = ~(a & b);<br>
    cout<<"~(a & b): "<<ans<<endl;<br>
    ans = a >> b;<br>
    cout<<"a >> b: "<<ans<<endl;<br>
    ans = a << b;<br>
    cout<<"a << b: "<<ans<<endl;<br>
    cout<<endl;<br>
<br>
}<br>*
<br>
**Outputs:** <br>
experiment - 3:<br>
![exp3pt1 output](https://github.com/tanishaamenon/CDS---Operators/blob/main/exp3pt1.JPG)
![exp3pt2 output](https://github.com/tanishaamenon/CDS---Operators/blob/main/exp3pt2.JPG)
<br>
experiment - 4:<br>
![exp4 output](https://github.com/tanishaamenon/CDS---Operators/blob/main/exp4.JPG)
<br>
**Conclusion:** <br>
&#8594; We learnt different operators in C++. <br>
&#8594; We learnt the use case of the operators in C++. <br>

