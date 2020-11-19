#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a1[]={1,2,3,5};
	int n = sizeof(a1)/sizeof(a1[0]);
	vector<int> a(a1,a1+n);
	int i,j;
	
	for(i=0,j=i+1;j<a.size();i++,j++)
	{
		if((a[i]+1)!=a[j])
		{
			cout<<a[i]+1;
			break;
		}	
	}	
return 0;
}

/*
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {

    int t;
    ll n,z;
    vector<ll> v,k;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(ll i=0;i<n-1;i++)
        {   cin>>z; v.push_back(z); 
            k.push_back(z%2);
        }
        
        for(ll i=1;i<n-1;i++)
        {
            if(k[i-1] == k[i])
            {
                cout<<v[i-1]+1;
            }
            else
            {
                continue;
            }
        }
    }
return 0;
}
*/

/* we can also use n*(n-1)/2 - actual sum of array*/
/* we can also use bit manipulation technique - XOR*/

