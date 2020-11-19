#include<bits/stdc++.h>
using namespace std;

void create(vector<int>&v, int n)
{
	int x;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		v.push_back(x);
	}
}

void display(vector<int>&v,int n)
{
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<"\t";
	}
	cout<<"\n";
}

int main()
{
	vector<int> v;
	int n,count=0;
	cout<<"\nHow many numbers:\t";
	cin>>n;
	cout<<"\nEnter the numbers:\t";
	create(v,n);	
	display(v,n);
	
	sort(v.begin(),v.end());
	display(v,n);
	int sum=0;
	for(int i=0;i<v.size()-2;i++)
	{cout<<"\nouter start";
		for(int j=i+1,k=i+2;k<v.size();)
		{
			sum=v[i]+v[j];
			if(sum<v[k])
			{
				cout<<i<<"\t"<<j<<"\t"<<k<<".......\n";
				j++;
				k++;
			
				
			}
			else if(sum>v[k])
			{
				k++;
			}
			else if(sum==v[k])
			{
				count++;
				cout<<v[i]<<" + "<<v[j]<<" = "<<v[k]<<"\n";
				j++;
				k++;
			}
			cout<<"\ninner for"	;
	}}
	/*
	if(count==0)
	{
		cout<<"-1";
	}
	*/	
}
