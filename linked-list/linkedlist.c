#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    struct Node *fifth;
    

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    fifth = (struct Node *)malloc(sizeof(struct Node));
   

    head->data = 45;
    head->next = second;

    second->data = 56;
    second->next = third;

    third->data = 78;
    third->next = fourth;

    fourth->data = 98;
    fourth->next = fifth;

    fifth->data = 220;
    fifth->next = NULL;

    struct Node *pointer = head;
    while (pointer != NULL)
    {
        printf("Elements are %d\n", pointer->data);
        pointer = pointer->next;
    }
    
    
    return 0;
}
