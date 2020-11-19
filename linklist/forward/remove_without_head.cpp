void deleteNode(Node *node)
{
   // Your code here
   if(node->next==NULL)
   {
       return;
   }
   
   Node* temp;
   temp=node->next;
   node->data=temp->data;
   node->next=temp->next;
   free(temp);
}

