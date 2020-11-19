void deleteNode(Node **head_ref, int x)
{
   int i;
  Node *temp,*cur;
  if(*head_ref == NULL)             //Always Checking that the list should not be empty 
        return;

  if(x==1)                  //index of list start from 1 so deleting the first node
  {
      temp = (*head_ref);               // referncing temp to first node to be deleted 
      *head_ref = (*head_ref)->next;      // moving head next position
      (*head_ref)->prev = NULL;    //breaking the previous node link
      free(temp);   		//freeing the memory 
  }
  else        // deleting node other than 1st node
  {
      for(i=1,temp=(*head_ref);i<x-1;i++,temp=temp->next);    // moving pointer to one pos before the element to be deleted
      cur = temp->next;          // making cur refer node to be deleted
      temp->next = cur->next;   //breaking the link with cur and making new link
      if(cur->next!=NULL)       // if its not end node
      cur->next->prev = temp;        
      free(cur);
  }
}
