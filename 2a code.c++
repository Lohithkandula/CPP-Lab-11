#include<iostream>
using namespace std;
int main()
{
int a, b, c;
float res;
cout << "Enter the value of a: ";
cin>>a;
cout << "Enter the value of b: ";
cin>>b;
cout << "Enter the value of c: ";
cin>>c;
try
{
if ((b-c)!=0)
{
res = (float) a/(b-c);
cout << "Result is: " << res;
}
else
{
throw (b - c);
}
}
catch (int i)
{
cout << "Answer is infinite because a-b is:" << i<< endl;
cout << "MathError: Divide by zero";
}
return 0;
}
