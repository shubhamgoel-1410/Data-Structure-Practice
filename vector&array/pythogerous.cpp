#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int main()
{
	/*solution 1
	int a[]={1,2,3,4,5,6,7,8,9,10};
	int i,j,k,val1,val2;
	
	for(i=0;i<10;i++)
	{
		for(k=9;k>=0;k--)
		{
			for(j=i+1;j<=k-1;j++)
			{	
				val1=pow(a[i],2)+pow(a[j],2);
				val2=pow(a[k],2);
				if(val1==val2)
				{
					cout<<a[i]<<"\t"<<a[j]<<"\t"<<a[k]<<"\n";
				}
			}
		}
	}*/
	
	int a1[]={1,2,3,4,5,6,7,8,9,10};
	int n=sizeof(a1)/sizeof(a1[0]);
	
	vector<int> v(a1,a1+n);
	//cout<<*v.begin();
	//cout<<"\n"<<*v.end();
	vector<int>::iterator i;
	int a;
	for(a=0;a<v.size();a++)
	{
		v[a]=v[a]*v[a];
	}
	
	for(i=v.begin();i<v.end();i++)
	{
		cout<<v[i];
	}
	
	
	for(a=v.size()-1;a>=0;a--)
	{
		int temp=v[a];
		for(int z=0,j=0,k=a-1;z<a;z++)
		{
			int sum=v[j]+v[k];
			if(sum==temp)
			{
				cout<<v[j]<<v[k]<<v[a]<<"\n";
				break;
			}
			else if(sum<temp)
			{
				j++;
			}
			else if(sum>temp)
			{
				k--;
			}
		}
		
	}	
	
	
	
	
	
}


