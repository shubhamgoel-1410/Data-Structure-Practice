#include<bits/stdc++.h>
using namespace std;

void create(vector<int> &v, int n)
{
	int z;
	for(int i=0;i<n;i++)
	{
		cin>>z;
		v.push_back(z);
	}
}

int sum(vector<int>&v, int i, int j)
{
	int s=0;
	for(;i<=j;i++)
	{
		s+=v[i];
	}
	return s;
}

int main()
{
	vector<int> v;
	int n,left,right;
	cin>>n;
	create(v,n);
	int i=0, j=v.size()-1, mid=v.size()/2;
	while(mid>i&&mid<j)
	{
		left=sum(v,i,mid-1);
		right=sum(v,mid+1,j);
		if(left<right)
		{
			mid++;
			sum(v,i,mid);
		}	
		else if(right<left)
		{
			mid--;	
			sum(v,mid,j);
		}	
		else
		{
			cout<<"Equilibrium point=\t"<<mid+1;
			break;
		}
	}
	
	
	return 0;
}
