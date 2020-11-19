#include<bits/stdc++.h>
using namespace std;

int power(int a,int n)
{
    if(n==0)
        return 1;

    return a * power(a,n-1);
}

int fastpower(int a,int n)
{
    if(n==0)
        return 1;

    int small = fastpower(a,n/2);
    small *= small;

    if(small%2==1)
        return a*small;
    else
        return small;
}


int main()
{
    int a,n;
    cin>>a>>n;
    cout<<power(a,n)<<endl;
    cout<<fastpower(a,n);
}
