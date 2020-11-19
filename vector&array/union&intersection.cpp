// A - []                      u-[1,2,3]    i -[]
// B - [1,2,3]

// A - [1,2]
// B - [1]                    u - [1,2]    i - [1]

// A - [1,2]                   u - [1,2]   i - [1,2]
// B - [1,2]

// A - [1,2]                  u - [1,2,3,4]   i - []
// B - [3,4]
#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> &v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<"  ";
    }
    cout<<endl;
}

void union_func(vector<int> &un,int *a,int *b,int n, int m)
{
    int i=0,j=0;
    while(i<n && j<m)
    {
        if(a[i]<b[j])
            un.push_back(a[i++]);
        else if(b[j]<a[i]) 
            un.push_back(b[j++]);
        else
            {un.push_back(b[j++]);i++;}
    }
    while(i<n)
        un.push_back(a[i++]);
    while(j<m)
        un.push_back(b[j++]);
}

void intersection_func(vector<int> &in,int *a,int *b,int n, int m)
{
    int i=0,j=0;
    while(i<n && j<m)
    {
        if(a[i]<b[j])
            i++;
        else if(b[j]<a[i])
            j++;
        else
        {
            in.push_back(a[i++]);
            j++;
        }
    }
}

void set_func(int *a,int *b,int n,int m)
{
    vector<int> un,in;
    union_func(un,a,b,n,m);
    print(un);
    intersection_func(in,a,b,n,m);
    print(in);
}

int main()
{
   int a[] = {1,2,3};
   int b[] = {1,2,3};
    int n = sizeof(a)/sizeof(a[0]);
    int m = sizeof(b)/sizeof(b[0]);
    set_func(a,b,n,m);
    return 0;
}
