#include<stdio.h>
#include<stdlib.h>

struct Node
{
	char *key;
	char *value;
	struct Node *next;
};

void push(struct Node** head_ref, char *key, char *value)
{
    /* 1. allocate node */
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
  
    /* 2. put in the data  */
    new_node->key    =    key;
    new_node->value  =  value;
  
    /* 3. Make next of new node as head */
    new_node->next = (*head_ref);
  
    /* 4. move the head to point to the new node */
    (*head_ref)    = new_node;
}

char* search(struct Node* head, char *key)
{
    struct Node* current = head; 
    while (current != NULL)
    {
        if (current->key == key)
            return current->value;
        current = current->next;
    }
    return NULL;
}


