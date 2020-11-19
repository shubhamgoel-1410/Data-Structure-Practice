/*https://practice.geeksforgeeks.org/problems/nth-node-from-end-of-linked-list/1*/
int getNthFromLast(Node *head, int n)
{
	 // Your code here
        Node *current;
        int count=0,i;
        for(current=head;current!=NULL;current=current->next)
            count++;
        count=count-n;
        if(count<0)
            return -1;
        else    
            for(i=0; i<count;i++,head=head->next);
                return head->data;
        
      
}
