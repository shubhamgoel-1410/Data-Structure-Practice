#include<stack>
#include<forward_list>
#include<iostream>

using namespace std;

void showlist(list <int> g) 
{ 
    list <int> :: iterator it; 
    for(it = g.begin(); it != g.end(); ++it) 
        cout << '\t' << *it; 
    cout << '\n'; 
} 

int main()
{
	list<int> list;
	for(int i=0;i<5;i++)
	{
		list.push_back(i);
	}
	
 	showlist(list);
 
	forward_list<int> fl= {1,2,3};
	
	showlist(fl);
		
	
	
	
	
	return 0;
}
