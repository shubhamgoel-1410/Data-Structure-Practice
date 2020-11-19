#include<bits/stdc++.h>
using namespace std;
void create(vector<int>& v1,int n1)
{
	int z;
	for(int i=0;i<n1;i++)
	{
		cin>>z;
		v1.push_back(z);
	}
	
}

void swap(vector<int>& v1,vector<int>& v2,int i, int j)
{
	v1[i]=v1[i]+v2[j];
	v2[j]=v1[i]-v2[j];
	v1[i]=v1[i]-v2[j];
}

int main()
{
	vector<int> v1,v2;
	int n1,n2;
	cout<<"\nEnter no. of elements for first:\t";cin>>n1;
	cout<<"\nEnter first sorted array:\t";
	create(v1,n1);
	cout<<"\nEnter no. of elements for second:\t";cin>>n2;
	cout<<"\nEnter second sorted array:\t";
	create(v2,n2);
	
	for(int i=0,j=0;i<v1.size();i++)
	{
		if(v1[i]<=v2[j])
		{
			;
		}	
		else if(v1[i]>v2[j])
		{
			swap(v1,v2,i,j);					
			if(v2[j]>v2[j+1])
			{
				sort(v2.begin(),v2.end());
			}
		}		
	}
	
	for(int i=0;i<v2.size();i++)
	{
		v1.push_back(v2[i]);
	}
	
	for(int i=0;i<v1.size();i++)
	{
		cout<<v1[i]<<"\t";
	}
}

/*// #include <bits/stdc++.h>
// #define ll long long int

// using namespace std;

// int main()
// {
//     int test ;

//     cin >> test ;

//     ll N , M ; 

//     while(test--)
//     {
//     	cin >> N >> M ;

//     	vector<ll> vi ;
//     	// vector<int> ci ;

//     	ll x ;

//     	for(int i = 0 ; i < N ; i++)
//     	  {
//     	      cin >> x ;

//     	      vi.push_back(x) ;
//     	  }

//     	for(int i = 0 ; i < M ; i++)
//     	{
//     		cin >> x ;

//     		vi.push_back(x) ;
//     	}

//     	sort(vi.begin() , vi.end()) ;

//     	for(int i = 0 ; i < vi.size() ; i++) cout << vi[i] << " " ;
    	
//     	// for(int i = 0 ; i < vi.size() ; i++) cout << vi[i] << " " ;

//     	cout << endl ;

//     }
//     return 0;
// }*/
