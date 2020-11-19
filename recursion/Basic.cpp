// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int power(int a,int n)
{
    if(n==0)           //base case
        return 1;

    return a * power(a,n-1);     // recursive case
}

int multiply(int a, int n)
{
    if(n==1)
        return a;

    return a+multiply(a,n-1);
}

int main() {
    // Write C++ code here
    // std::cout << "Hello world!";
    int a = 2;
    int n = 4;

    cout<<multiply(a,n);
    return 0;
}
