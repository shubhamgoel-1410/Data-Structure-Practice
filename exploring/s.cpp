#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
struct node
{ int data;
struct node *next;
};
struct node* createlist()
{
int i,n;
struct node *headnd=NULL,*newnd,*tempnd;
printf("\nHow many numbers???\t");
scanf("%d",&n);
printf("\nEnter these numbers now\n");
for(i=0;i<n;i++)
{ newnd=(struct node*)malloc(sizeof(struct node));
scanf("%d",&newnd->data);
newnd->next=NULL;
if(headnd==NULL)
{ headnd=newnd;
tempnd=newnd;
}
else
{ tempnd->next=newnd;
tempnd=newnd;
}
}//for
return headnd;
}//createlist

void display(struct node *headnd)
{
struct node *current;
if(headnd==NULL)
{
printf("\nThe list is empty ");
return;
}
for(current=headnd;current!=NULL;current=current->next)
{
printf("%d ",current->data);
}
}//display
/*
struct node* rotate(struct node* head, int k) {
    // Your code here
    if(head==NULL) return head;
    struct node *head1,*current=head;
    int i;
    for(i=1,head1=head;i<k;head1=head1->next,i++);
	
    head=head1;
    head1=head1->next;
    head->next=NULL;
    head=head1;
    
    for( ; head1->next!=NULL;head1=head1->next);
    head1->next=current;
    
    return head;
}


struct node *reverse (struct node *head, int k)
{ 
	if(head==NULL) return head;
    // Complete this method
    node *head1=head,*head2,*current,*temp;
    int i;
    for(i=1,head2=head;i<k;i++,head2=head2->next)
    {	cout<<i<<"\t";	
	if(head2==NULL)
    		return(head);
}
    current=head2;
    head2=head2->next;
    current->next=NULL;
   
    temp=head1->next;
    head1->next=NULL;
    while(temp!=NULL)
    {
        current=temp->next;
        temp->next=head1;
        head1=temp;
        temp=current;
    }
	
    temp=head2->next;
    head2->next=NULL;
    while(temp!=NULL)
    {
        current=temp->next;
        temp->next=head2;
        head2=temp;
        temp=current;
    }
    
    for(current=head1;current->next!=NULL;current=current->next);
    current->next=head2;
    return head1;
}*/

node* sortedMerge(node* head1,   node* head2)
{
    node* cur1,*cur2,*newnd,*head3=NULL,*temp=NULL;
    for(cur1=head1,cur2=head2;cur1!=NULL && cur2!=NULL; )
    {
        if(cur1->data<cur2->data)
        {
            newnd= new Node(cur1->data);
            if(head3==NULL)
            {
                head3=newnd;
                temp=newnd;
            }
            else
            {
                temp->next=newnd;
                temp=newnd;
            }
            cur1=cur1->next;
        }  
        else
        {
            newnd=new Node(cur2->data);
            if(head3==NULL)
            {
                head3=newnd;
                temp=newnd;
            }
            else
            {
                temp->next=newnd;
                temp=newnd;
            }
            cur2=cur2->next;
        }
    }    
    while(cur1!=NULL)
    {
        newnd=new Node(cur1->data);
        temp->next=newnd;
        temp=newnd;
    }
    
    while(cur2!=NULL)
    {
        newnd=new Node(cur2->data);
        temp->next=newnd;
        temp=newnd;
    }
    return head3;
}

int main()
{
	int k;
	struct node* head1,*head2,*head3;
	head1=createlist();
	display(head);
	head2=createlist();
	head3=sortedMerge(head1,head2);
	display(head3);
}
