#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	//code
    int t;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        sort(s.begin(),s.end());
        do{
            cout<<s<<" ";    
        }while(next_permutation(s.begin(),s.end()));
        cout<<"\n";
    }
	return 0;
}
