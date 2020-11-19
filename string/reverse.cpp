#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void reverse(char *begin, char *end)
{
	char t;
	while(begin<end)
	{
		t=*begin;
		*begin=*end;
		*end=t;
		begin++;
		end--;	
	}	
}

void reverseword(char *s)
{
	char *word_begin=s;
	char *temp=s;
	while(*temp)
	{
		temp++;
		if(*temp == '.')
		{
			reverse(word_begin,temp-1);
			word_begin=temp+1;
		}
		else if(*temp== '\0')
		{
			reverse(word_begin,temp-1);
		}
	}
	reverse(s,temp-1);
}

int main()
{
	char s[100];
	cin>>s;
	reverseword(s);		
	cout<<s;
}
