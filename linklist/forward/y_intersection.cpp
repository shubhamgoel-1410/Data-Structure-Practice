/*https://practice.geeksforgeeks.org/problems/intersection-point-in-y-shapped-linked-lists/1/*/

int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    if(head1==NULL || head2==NULL)
        return -1;
    Node* current;    
    for( ;head1!=NULL;head1=head1->next)
    {
        for(current=head2;current!=NULL;current=current->next)
        {
            if(head1==current)
                return head1->data; 
        }
    }
}
