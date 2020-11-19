Node* reverseDLL(Node * head)
{
    //Your code here
    Node *temp,*cur;
    if(head==NULL)
        return NULL;
    
    for(temp = head;temp->next!=NULL;temp = temp->next);
    head = temp;
    while(temp!=NULL)
    {
        cur = temp->next;
        temp->next = temp->prev;
        temp->prev = cur;
        temp = temp->next;
    }
    return head;
}
