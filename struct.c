#include<stdio.h>
#include<stdlib.h>

struct Node
{
	char *key;
	char *value;
	struct Node *next;
};

void push(struct Node** head_ref, int new_data)
{
    /* 1. allocate node */
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
  
    /* 2. put in the data  */
    new_node->data  = new_data;
  
    /* 3. Make next of new node as head */
    new_node->next = (*head_ref);
  
    /* 4. move the head to point to the new node */
    (*head_ref)    = new_node;
}

bool search(struct Node* head, int x)
{
    struct Node* current = head; 
    while (current != NULL)
    {
        if (current->key == x)
            return true;
        current = current->next;
    }
    return false;
}

int main()
{
	struct Node* head = NULL;
	push(&head,)
}
