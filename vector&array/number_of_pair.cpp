#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int m,n,yn=0; cin>>m>>n;
        int x[m+2],noy[5]={0};
        vector<int> y;
        for(int i=0;i<m;i++) cin>>x[i];
        for(int i=0;i<n;i++)
        {
            int z; cin>>z;
            if(z<5) noy[z]++;
            else y.push_back(z);
        }
        sort(y.begin(),y.end());
        long long int cnt=0;
        for(int i=0;i<m;i++)
        {
            if(x[i]==1) continue;
            vector<int>::iterator ind=upper_bound(y.begin(),y.end(),x[i]);
            cnt+=(y.end()-ind);
            cnt+=noy[1];
            if(x[i]==3) cnt+=noy[2]+noy[4];
        }
        cout<<cnt<<endl;
    }
return 0;
}


/*#include<iostream>
#include<vector>
#include<math.h>
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
int main()
{
	int x,y,n1,n2,count=0;
	vector<int> v1,v2;
	cin>>n1>>n2;
	create(v1,n1);
	create(v2,n2);
	
	for(int i=0;i<v1.size();i++)
	{
		x=v1[i];
		for(int j=0;j<v2.size();j++)
		{	
			y=v2[j];
			if(pow(x,y)>pow(y,x))
			{
				count++;
			}
		}
	}
	
	cout<<"\nPairs=\t"<<count;
}*/
