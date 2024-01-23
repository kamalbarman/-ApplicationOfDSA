#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

void Traversal(struct Node *pointer)
{
   
     while (pointer != NULL)
    {
         printf("Elements are %d\n", pointer->data);
           pointer = pointer->next;
    }
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    struct Node *fifth;
    struct Node *sixth;
    struct Node *seventh;
    struct Node *eighth;
    struct Node *ninth;
    struct Node *tenth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    fifth = (struct Node *)malloc(sizeof(struct Node));
    sixth = (struct Node *)malloc(sizeof(struct Node));
    seventh = (struct Node *)malloc(sizeof(struct Node));
    eighth = (struct Node *)malloc(sizeof(struct Node));
    ninth = (struct Node *)malloc(sizeof(struct Node));
    tenth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 45;
    head->next = second;

    second->data = 56;
    second->next = third;

    third->data = 78;
    third->next = fourth;

    fourth->data = 98;
    fourth->next = fifth;

    fifth->data = 100;
    fifth->next = sixth;

    sixth->data = 120;
    sixth->next = seventh;

    seventh->data = 180;
    seventh->next = eighth;

    eighth->data = 200;
    eighth->next = ninth;

    ninth->data = 200;
    ninth->next = tenth;

    tenth->data = 220;
    tenth->next = NULL;

    // struct Node *pointer = head;
    // while (pointer != NULL)
    // {
    //     printf("Elements are %d\n", pointer->data);
    //     pointer = pointer->next;
    // }
    // return 0;
    Traversal(head);
    return 0;
}
