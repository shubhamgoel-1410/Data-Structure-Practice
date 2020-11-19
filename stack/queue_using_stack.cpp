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

class Queue
{
	Stack s1,s2;
	public:
	void enqueue(int x)
	{
		while(!s1.empty())
		{
			s2.push(s1.pop());
		}
		s1.push(x);
		while(!s2.empty())
		{
			s1.push(s2.pop());
		}	
	}
	
	int dequeue()
	{
		return(s1.pop());	
	}	
};
int main()
{
	Queue q;
	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	
	cout<<q.dequeue();
	cout<<"\t"<<q.dequeue();
	cout<<"\t"<<q.dequeue();

}
