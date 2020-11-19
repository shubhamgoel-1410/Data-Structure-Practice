#include<bits\stdc++.h>
using namespace std;

int main()
{
	string s;
	stack<char> s1;
	cout<<"\nEnter the string:\t";
	cin>>s;
	
	if(s.length()%2==0)
	{
		cout<<"Unbalanced Paranthesis";
	}
	else
	{
		for(int i=0;i<s.length();i++)
		{	
			if(s[i]=='{' || s[i]=='(' || s[i]=='[')
			{
				s1.push(s[i]);
			}	
			else
			{	
				if(s[i]=='}')
				{
					if(s1.top()=='{')
						s1.pop();
					else
						break;
				}
				else if(s[i]==')')
				{
					if(s1.top()=='(')
						s1.pop();
					else
						break;
				}
				else
				{
					if(s1.top()=='[')
						s1.pop();
					else
						break;
				}
			}//inner else
		}//for
		if(s1.empty())
			cout<<"Balanced Paranthesis";
		else
			cout<<"Unbalanced Paranthesis";		
	}//else 	
}
