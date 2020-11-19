#include<iostream>
using namespace std;

void find(int a[] , int n)
{
    
    int cc = 1, maxc = 1, res = 0;
    for(int i=1;i<=n;i++)
    {
        if(a[i] == a[i-1])
            cc++;
        else
        {
            if(cc>maxc)
            {
                maxc=cc;
                res=a[i-1];
            }
            cc=1;
        }
    }
    cout<<"Element :\t"<<res;
    cout<<"Count :\t"<<maxc;
}
int main()
{
    int a[] = {1,2,2,3,3,3,5,5,5,5,5,5,5,5,5};
    find(a,15);
}
