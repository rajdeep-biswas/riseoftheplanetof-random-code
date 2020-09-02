SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode *dummy = malloc(sizeof(SinglyLinkedListNode));
    dummy -> data = -1;
    dummy -> next = NULL;

    SinglyLinkedListNode *tail = dummy;

    while(head1 || head2) {

        if(!head1) {
            tail -> next = head2;
            break;
        }
        if(!head2) {
            tail -> next = head1;
            break;
        }

        tail -> next = malloc(sizeof(SinglyLinkedListNode));
        tail -> next -> next = NULL;

        if(head1 -> data <= head2 -> data) {
            tail -> next -> data = head1 -> data;
            head1 = head1 -> next;
        }
        else {
            tail -> next -> data = head2 -> data;
            head2 = head2 -> next;
        }
        tail = tail -> next;
    }

    return dummy -> next;
}