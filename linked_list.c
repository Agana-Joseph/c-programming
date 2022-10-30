#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

int main()
{
    int i, n, item;
    struct node *p, *q, *head;
    
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    
    printf("Enter the value of head node: ");
    scanf("%d", item);
    
    q = (struct node *)malloc(sizeof(struct node));
    q->data = item;
    q->next = NULL;
    
    head = q;
    p = head;
    
    for(i = 1; 1 < n; i++)
    {
    printf("Enter the value of the next node: ");
    scanf("%d", item);
    
    q = (struct node *)malloc(sizeof(struct node));
    q->data = item;
    q->next = NULL;
    
    p->next = q; //link the nodes
    p = p-> next; //jumb to the curent nodes
    }
    printf("\n");
    p = head;
    while(p != NULL)
    {
        printf("%d",p->data);
        p = p->next;
    }
}
