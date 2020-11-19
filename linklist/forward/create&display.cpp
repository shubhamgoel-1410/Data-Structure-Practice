#include<iostream>
#include<stack>
using namespace std;

class Node
{
	public:
		int data;
		Node * next;
		Node(int d)
		{
			data=d;
			next=NULL;	
		}	
};

Node* create(Node *head,int n)
{
	int z;
	Node* temp;
	for(int i=0;i<n;i++)
	{
		cin>>z;
		if(head==NULL)
		{
			head= new Node(z);
			temp=head;
			head->next=NULL;
		}
		else
		{
			temp->next= new Node(z);
			temp=temp->next;
		}
	}
	return head;
}

void display(Node *head)
{
	for( ; head!=NULL;head=head->next)
	{
		cout<<head->data<<" ";
	}
}


bool isPalindrome(Node *head)
{
    //Your code here
    stack<int> s;
    int i=0,count=0;
    Node* cur;
    bool flag=false;
    
    for(cur=head;cur!=NULL;cur=cur->next)count++;
   
    if(count%2==0)                 //even
    {   
        while(i<count/2)    
        {
            s.push(head->data);
            head=head->next;
        }
        while(head!=NULL)
        {
            if(s.top()==head->data)
            {
                head=head->next;
                s.pop();
            }     
            else
            {
                flag=false;
                break;
            }
        }
    }
    else           //odd
    {
        while(i<(count+1)/2)
        {
            s.push(head->data);
            head=head->next;
        }
        while(head!=NULL)
        {
            if(s.top()==head->data)
            {
                head=head->next;
                s.pop();
            }
            else
            {
                flag=false;
                break;
            }    
        }
    }    
}


int main()
{
		Node* head=NULL;
		int n;
		bool f;
		cout<<"\nEnter the no. of nodes: \t";
		cin>>n;
		head=create(head,n);
		display(head);	
		f=isPalindrome(head);
		if(f==false)
		{
			cout<<"no";
		}
		else
		{
			cout<<"yes"; 
		}
	
	
	return 0;
}
