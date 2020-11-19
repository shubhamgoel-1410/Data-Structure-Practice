#include <iostream>
#include<stack>
#include<string>
using namespace std;

int main() {
	//code
	string st;
	stack<char> s;
	int t,count=0;
	cin>>t;
	while(t--)
	{
	    cin>>st;
	    for(int i=0 ; st[i]!='\0' ; i++){
	    if(s.empty())
	    {
	        if(st[i]=='(')
	        s.push(st[i]);
	        else
	        ;
	    }
	    else
	    {
	        if(s.top()==')')
	        {
	            s.pop();
	            count+=2;
	        }
	        else
	        {
	            s.push(st[i]);
	        }
	    }
	    }
	    cout<<count;
	    t--;
	}
	
	
	return 0;
}
