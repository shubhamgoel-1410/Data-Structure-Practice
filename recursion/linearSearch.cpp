// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int linearSearch(int a[],int n,int i,int key)
{
    if(i==n)
        return -1;

    if(a[i] == key)
        return i;

    return linearSearch(a,n,i+1,key);
}

int lastOcc(int a[],int n,int i,int key)
{
  static int x = -1;
  if(i==n)
    return -1;

  if(a[i] == key)
    x = i;

    lastOcc(a,n,i+1,key);
    return x;
}


int main() {
    // Write C++ code here
    int a[] = {1,2,3,4,5};
    int n = 5;
    cout<<linearSearch(a,n,0,4);
    return 0;
}
