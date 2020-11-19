#include<iostream>
using namespace std;
class node
{
	public:
		int data;
		node * next;
		node(int d)
		{
			data=d;
			next=NULL;	
		}	
};

node* create(node *head,int n)
{
	int z;
	node* temp;
	for(int i=0;i<n;i++)
	{
		cout<<"\nEnter the element:\t";
		cin>>z;
		cout<<"\n";
		if(head==NULL)
		{
			head= new node(z);
			temp=head;
			head->next=NULL;
		}
		else
		{
			temp->next=new node(z);
			temp=temp->next;
		}
	}
	return head;
}

void display(node *head)
{
	for( ; head!=NULL;head=head->next)
	{
		cout<<head->data<<" ";
	}
}

node* insert_at_head(node *head)
{
	int z;
	cout<<"\nEnter the element:\t";
	cin>>z;
	node* temp= new node(z);
	temp->next=head;
	head=temp;
	return head;
}

void insert_at_end(node *head)
{
	int z;
	cout<<"\nEnter the element:\t";
	cin>>z;
	node* temp = new node(z);
	for( ;head->next!=NULL;head=head->next);
	head->next=temp;
}

void insert_by_index(node* head)
{
		int pos,z;
		cout<<"\nEnter the index :\t";
		cin>>pos;
		cout<<"\nEnter the element:\t";
		cin>>z;
		node* temp=new node(z);
		for(int i=1;i<pos-1;i++,head=head->next);
		temp->next=head->next;
		head->next=temp;
}

void insert_by_ele(node* head)
{
	int z,d;
	cout<<"\nEnter the element:\t";
	cin>>z;
	node* temp=new node(z);
	cout<<"\nEnter the node before u want to insert:\t";
	cin>>d;
	if(head->data==temp->data)
		return;
	else
	 	for( ;head->next->data!=d;head=head->next);
	 	temp->next=head->next;
	 	head->next=temp;
}
int main()
{
		node* head=NULL;
		int n;
		cout<<"\nEnter the no. of nodes: \t";
		cin>>n;
		head=create(head,n);
		display(head);	
		head=insert_at_head(head);
		display(head);
		insert_at_end(head);
		display(head);
		insert_by_index(head);
		display(head);
		insert_by_ele(head);
		display(head);
	return 0;
}




