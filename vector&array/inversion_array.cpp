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

int recur(vector<int> &v,int i)
{
	static int count;
	if(i<v.size()-1)
	{
		for(int j=i+1;j<v.size();j++)
        {
            if(v[i]>v[j])
            	count++;
        }
        i++;
    	recur(v,i);
	}
	else
		return count;
}

int main()
{
    int c,n,t,i=0;
    vector<int> v;
    cin>>t;
    cout<<"\n";
    cin>>n;
    create(v,n);
    while(t--){
    	c=recur(v,i);
    cout<<"\n"<<c;
    }
    return 0;
}
