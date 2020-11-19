/* #include<bits\stdc++.h>
using namespace std;
void swap()
{
	temp=*(v.end()-1);
		for(i=v.size()-2;i>=0;i--)
		{
			v[i+1]=v[i];
		}
		v[i+1]=temp;

}

int main()
{
	vector<int> v;
	int temp,i,x,n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		v.push_back(x);
	}
	for(int j=0;j<v.size();j+2)
	{
	
	}
	
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i];
	}
	
	
	return 0;
}*/

#include <iostream>
using namespace std;
#define ll long long

int main() {
    ll n,i,j,t;
    cin>>n;
    ll a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    i=0;
    j=n-1;
    while(i<j)
    {
        t=a[i];
        a[i]=a[j];
        a[j]=t;
        i+=2;j-=2;
    }
        
    for(i=0;i<n;i++)
    {
        cout<<a[i];
    }
    return 0;
}
