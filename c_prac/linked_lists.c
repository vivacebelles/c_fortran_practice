#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};
void printList(struct node *n){
    while (n != NULL){
        printf(" %d \n", n->data);
        n = n->next;
    }
};
int main()
{
    //all nodes start NULL 
    struct node* head = NULL;
    struct node* second = NULL;
    struct node* third = NULL;

    /* allocate memory for each node */
    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));

    head->data=1; /*first node has data */
    head->next= second;

    second->data=4;
    second->next = third;

    third->data=9;
    third->next= NULL; /* last node needs to be NULL in linear list to signal end */

    printList(head);
    
    return 0;
}
