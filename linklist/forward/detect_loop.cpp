/*https://practice.geeksforgeeks.org/problems/detect-loop-in-linked-list/1#ExpectOP*/
int detectloop(Node *head) {
    // your code here
    int count=0;
    if(head==NULL)
        return 0;
    
    if(head==head->next)
        return 1;
    if(head->next==NULL)
        return 0;
        
    Node* slow=head,*fast=head->next->next;
    while(fast!=NULL && fast->next!=NULL)
    {
        if(fast==slow)
        {   
            count=1;
            break;
        }
        slow=slow->next;
        fast=fast->next->next;
    }
    return count;
}

