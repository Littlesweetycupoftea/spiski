
void push(struct node* head, int data) {
  struct node* newNode =(struct node*) malloc(sizeof(struct node)); //в первоначальной версии отсутствует выделенная область памяти 
  newNode->data = data;
  newNode->next = NULL;   //
  head = newNode;
                                       }

void push_test() {
  newNode* /*замена List*/ head = build();    
  push(&head /*добавка &*/, 1); 
                                }          

 
 
