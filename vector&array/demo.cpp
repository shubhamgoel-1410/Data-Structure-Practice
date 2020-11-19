#include<iostream>
using namespace std;
void display(int *a,int n)
{
  for(int i=0;i<n;i++)
    cout<<a[i]<<"  ";
  cout<<endl;
}

void sort(int *a,int n)
{
  for(int i=0;i<n;i++)
    for(int j=i+1;j<n;j++)
    {
        if(a[j]<a[i])
        {
          int temp = a[j];
          a[j] = a[i];
          a[i] = temp;
        }
    }
}

int main()
{
  int a[] = {9,8,7,6,5,4,10,11,12,19};
  int n = sizeof(a)/sizeof(a[0]);
  display(a,n);
  sort(a,n);
  display(a,n);
}
