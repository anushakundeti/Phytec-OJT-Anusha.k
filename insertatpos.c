void insertAtPosition(struct Node** head_ref, int position, int new_data) {
    if (position == 0) {
        insertAtBeginning(head_ref, new_data);
        return;
    }
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    struct Node* temp = *head_ref;
    new_node->data = new_data;
    for (int i = 0; temp != NULL && i < position - 1; i++)
        temp = temp->next;
    if (temp == NULL)
        return;
    new_node->next = temp->next;
    temp->next = new_node;
}

