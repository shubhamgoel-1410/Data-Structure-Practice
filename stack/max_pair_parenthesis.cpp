#include<stack>
#include<iostream>
using namespace std;

int main()
{
	int i=0,count=0;
	string n;
	cin>>n;
	stack<char> s;
	while(n[i]!='\0')
	{
		if(n[i]=='(')
		{
			s.push(n[i]);
		}
		else
		{
			if(s.empty()&&n[i]==')');
			else
			{	
				s.pop();
				count+=2;
			}
		}
		i++;
	}
	cout<<"Max lenght=\t"<<count;
}

