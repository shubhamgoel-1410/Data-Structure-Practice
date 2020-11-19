#include<bits/stdc++.h>
using namespace std;
#define ll long long 

ll findsum(vector<ll> a, ll start, ll last)
{
    ll sum=0;
    for( ; start<=last ; start++)
        sum+=a[start];
    return sum;    
}

void findpoints(vector<ll> a, ll n, ll sum)
{
    ll start=0,last=0, cs = 0;
    bool flag = false;
    while(flag==false)
    {
        cs = findsum(a,start,last);
        if(cs<sum)
            last++;
        else if(cs>sum)
            start++;
        else if(cs==sum)
        {
            cout<<start+1<<" ";
            cout<<last+1<<"\n";
            flag = true;
        }    
    }
}

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    vector<ll> a;
	    ll n = 0,z = 0,sum = 0;
	    cin>>n;
	    cin>>sum;
	    for(ll i=0;i<n;i++)
	    {    cin>>z;
	        a.push_back(z);
	    }
	    findpoints(a,n,sum);
	}
	return 0;
}
	
/*#include<bits/stdc++.h>
using namespace std;

void create(vector<int> &a,int n)
{
	int z;
	for(int i=0;i<n;i++)
	{
		cin>>z;
		a.push_back(z);
	}
}

void display(vector<int> &a,int n)
{
	for(int i=0;i<a.size();i++)
	{
		cout<<a[i]<<"\t";
	}
	
		Alternate way
	for(x=a.begin();x<a.end();x++)
	{
		cout<<*x<<"\t";
	}
}

int result(vector<int>&a,int i, int j)
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
	vector<int> a;
	vector<int>::iterator x;
	int n,sum,temp=0;
	cout<<"\nEnter no. of elements:\t";
	cin>>n;
	cout<<"\nEnter the elements:\t";
	create(a,n);
	display(a,n);
	cout<<"\nEnter the sum:\t";
	cin>>sum;
	
	for(int i=0,j=i+1;i<a.size();)
	{
			temp=result(a,i,j);
			if(sum==temp)
			{
				cout<<i<<"\t"<<j;
				break;
			}
			else if(temp<sum)
			{
				j++;
			}
			else
				i++;
	}
	
}*/
