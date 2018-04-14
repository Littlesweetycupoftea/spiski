struct node* CopyList(struct node* head) 
{
   struct node* current = head;
   struct node* newList = NULL;
   struct node* tail = NULL;
   
   while (current != NULL) 
   {
      if (newList == NULL)
      { 
         newList = malloc(sizeof(struct node));
         newList->data = current->data;
         newList->next = NULL;
         tail = newList;
      }
      else 
      {
         tail->next = malloc(sizeof(struct node));
         tail = tail->next;
         tail->data = current->data;
         tail->next = NULL;
      }
      current = current->next;
   }
   return(newList);
}
