SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {
    
    SinglyLinkedListNode* temp = new SinglyLinkedListNode(data);
    int i;
    temp->data = data;
    temp->next=NULL;
    SinglyLinkedListNode* p;
    p=head;
    while(i<position-1)
    {
        p=p->next;
        i++;
        
        
        
    }
    
    temp->next=p->next;
    p->next=temp;
    
    return head;
    


}