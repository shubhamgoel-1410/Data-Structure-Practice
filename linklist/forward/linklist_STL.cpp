#include<bits/stdc++.h>
using namespace std;

int main()
{
	forward_list<int> list1;
	list1.assign({10,20,30,40,50})
	int n=distance(list1.begin(),list1.end());
	for(int i=0;i<n;i++)
	{
		cout<<list1[i];
	}
	
	return 0;
}

