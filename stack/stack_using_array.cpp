#include<iostream>
using namespace std;

class Stack
{
	private:
		int a[10];
		int top;
	public:
		Stack()
		{
			top=-1;
		}
		void push(int x)
		{
			a[++top]=x;
		}	
		int pop()
		{
			return(a[top--]);
		}
		int empty()
		{
			if(top==-1)
				return 0;
		}
};

int main()
{
	Stack s;
	s.push(10);
	s.push(20);
	s.push(30);
	cout<<s.pop();
	cout<<"\t"<<s.pop();
	cout<<"\t"<<s.pop();
}
