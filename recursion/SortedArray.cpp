// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

bool sortedArray(int a[],int n)
{
    if(n==1)
        return true;

    if(a[0]<a[1] and sortedArray(a+1,n-1))
        return true;

    return false;
}

int main() {
    // Write C++ code here
    int a[] = {1,2,3,4,5};
    int n = sizeof(a)/sizeof(a[0]);
    cout<<sortedArray(a,n);
    return 0;
}
