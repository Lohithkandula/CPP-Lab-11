#include <iostream>
#define SIZE 2
#include <string>
using namespace std;
template <class T> class Stack
{
private:
int top;
T stack[];
public:
Stack()
{
top = -1;
}
void push(T ele)
{
if (isFull())
{
cout << "STACK OVERFLOW\n";
}
else
{
stack[++top] = ele;
cout<<ele<<" was pushed in the stack."<<endl;
}
}
void pop()
{
if (isEmpty())
{
cout << "STACK UNDERFLOW\n";
}
else
{
cout<<stack[top--]<<" was popped."<<endl;
}
}
bool isFull()
{
if (top == (SIZE - 1))
return 1;
else
return 0;
}
bool isEmpty()
{
if (top == -1)
return 1;
else
return 0;
}
};
int main()
{
cout<<"The size of the stacks is taken as 2\n"<<endl;
Stack<int> a;
Stack<float> b;
Stack<char> c;
Stack<string> d;
a.push(2);
a.push(7);
a.push(9);
a.pop();
a.pop();
a.pop();
printf("\n");
b.push(2.56);
b.push(7.42);
b.push(9.89);
b.pop();
b.pop();
b.pop();
printf("\n");
c.push('H');
c.push('E');
c.push('Y');
c.pop();
c.pop();
c.pop();
return 0;
}
