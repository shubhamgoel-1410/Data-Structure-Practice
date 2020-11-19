#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void create(vector<int>&a,int n)
{
	int z;
	for(int i=0;i<n;i++)
	{
		cin>>z;
		a.push_back(z);
	}
}

void display(vector<int>&a)
{
	for(int i=0;i<a.size();i++)
	{
		cout<<a[i]<<"  ";
	}
}

int sum(vector<int>&a,int i,int j)
{
	int temp=0;
	for(;i<=j;i++)
	{
		temp+=a[i];
	}
	return temp;
}

int main()
{
	int a1[]={1,2,3,-2,5};
	int sizea1=sizeof(a1)/sizeof(a1[0]);
	vector<int> a;
	vector<int> b(a1,a1+sizea1);    //starting address & ending address
	display(b);
	int temp,max,n;
	cout<<"\nEnter how many no:\t";
	cin>>n;
	cout<<"\nEnter the numbers:\n";
	create(a,n);
	display(a);
	/*cout<<"\nSorted Elements:\n";            cannot use sorting as the order will be changed so sum will differ
	sort(a.begin(),a.end());
	display(a);
	*/
	max=a[0];
	/*                                                 o(n^2) complexity
	for(int i=0;i<a.size()-1;i++)
	{
		for(int j=i+1;j<a.size();j++)
		{
			temp=sum(a,i,j);
			if(temp>max)
			{
				max=temp;
			}
		}
	}
	*/
	
	int i=0;                                         //o(n) complexity
		for(int j=i+1;j<a.size();j++)
		{
			temp=sum(a,i,j);
			if(temp>max)
			{
				max=temp;
			}
			if(j==a.size()-1)
				i++;
		}
	
	cout<<"Maximum sum=\t"<<max;
		
return 0;	
}
