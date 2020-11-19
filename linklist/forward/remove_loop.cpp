/*https://practice.geeksforgeeks.org/problems/remove-loop-in-linked-list/1*/
void removeTheLoop(Node *head)
{
     //Your code here
     if(detectloop(head)==0)
        return;
     
    Node* slow=head,*fast=head->next;
    while(slow!=fast)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
            break;
    }
    
    fast=fast->next;
    
    while(head!=fast)
    {
        if(head->next==fast->next)
        {
            fast->next=NULL;
            return;
        }
        
        head=head->next;
        fast=fast->next;
    }
}

