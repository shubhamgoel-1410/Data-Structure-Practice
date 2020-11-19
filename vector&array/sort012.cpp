#include<bits/stdc++.h>
using namespace std;
void create(vector<int> &v,int n)
{
    int z;
    for(int i=0;i<n;i++)
    {
        cin>>z;
        v.push_back(z);
    }
}
void display(vector<int> &v,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<v[i];
    }
}

void sort(vector<int> &v, int n)
{
    int x=0,y=0,z=0;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==0)
            x++;
        else if(v[i]==1)
            y++;
        else
            z++;
    }

    int i=0;
    for( ;i<x;i++)
      v[i] = 0;
    for( ;i<(x+y);i++)
        v[i] = 1;
    for( ;i<(x+y+z);i++)
          v[i] = 2;
}

int main()
{
    vector<int> v;
    int n,t;
    cin>>t;
    while(t--){
    cout<<"\n";cin>>n;
    create(v,n);
    sort(v,n);
    display(v,n);}
}
