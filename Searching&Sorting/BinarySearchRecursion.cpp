// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int binarySearch(int a[],int n,int start ,int last,int target)
{
    if(start>last)
        return -1;

    int mid = (start+last)/2;
    if(target == a[mid])
        return mid;
    if(target<a[mid])
        binarySearch(a,n,0,mid-1,target);
    else
        binarySearch(a,n,mid+1,last,target);
}

int main() {
    // Write C++ code here
    // std::cout << "Hello world!";
    int a[5] = {1,2,3,4,5};
    int n=5;
    int target = 100;
    int x = binarySearch(a,n,0,n-1,target);

    cout<<x;
    return 0;
}
