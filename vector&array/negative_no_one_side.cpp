//Test Case
// -1 -2 -3 1 2 3 
// -1 2 -3 4 -5       
// 1 -2 -3 4
// 1 2 3 -1 -2 -3


#include<iostream>
using namespace std;
void print(int *a,int n)
{
    for(int i=0;i<n;i++)
        cout<<" "<<a[i];
    cout<<endl;    
}

int main()
{
    int a[] = {1,-2,-3,4};
    int n = sizeof(a)/sizeof(a[0]);
    int temp;
    int i,j=0;
    for(i=0;i<n;)
    {
        if(a[i]<0 && i==j)
        {    j++; i++;}
        else if(a[i]>0)
            i++;
        else if(a[i]<0 && i!=j)
        {
            int temp  =a[i];
            a[i] = a[j];
            a[j] = temp;
            i++;j++;
        }
        print(a,n);
    }
    
}
