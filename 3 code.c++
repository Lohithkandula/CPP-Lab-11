#include<iostream>
using namespace std;
int main()
{
int x;
cout << "Enter a number: ";
cin>>x;
try
{
if (x < 0)
throw x;
else
throw 'x';
}
catch (int x)
{
cout << "The number is less than zero";
}
catch (char x)
{
cout << "The number is greater than or equal to zero";
}
return 0;
}
