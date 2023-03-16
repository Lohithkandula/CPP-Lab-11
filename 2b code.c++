#include<iostream>
using namespace std;
int main()
{
int n, ele, loc;
cout<<"Enter the size of the array: ";
cin>>n;
int arr[n];
cout<<"Enter the location where you want to insert element: ";
cin>>loc;
try
{
if (loc<5 && loc>=0)
{
cout << "Enter the element: ";
cin>>ele;
arr[loc] = ele;
cout << "Element Inserted..."<<endl;
}
else
{
throw 0;
}
}
catch (int i)
{
cout <<"Error: Array out of Index."<< endl;
}
return 0;
}
