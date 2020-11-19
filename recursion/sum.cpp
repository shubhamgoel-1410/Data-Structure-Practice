// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int sum(int a[],int n)
{
    if(n==0)
        return 0;
    return a[0] + sum(a+1,n-1);
}

int main() {
    // Write C++ code here
    int a[] = {1,2,3,4,5};
    int n = 5;
    cout<<sum(a,n);
    return 0;
}
