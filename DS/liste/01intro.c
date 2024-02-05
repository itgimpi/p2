#include<stdio.h> // Linked List by hand
#include<stdlib.h> // Samo za vezbanje!!!

struct Node {
    int data;
    struct Node *next; } ;

void ispis(struct Node *n){
    while (n != NULL) {
        printf("%i ", n->data);
        n = n->next;  } }

int main() {
    // ako pokazivaci jos ne pokazuju na nista, vrednost je 0
    struct Node *head = NULL; // 3 pointers to 3 nodes, but not yet
    struct Node *second = NULL;
    struct Node *third = NULL;
    // alokacija 3 cvora za 3 pokazivaca
    head  = ( struct Node * ) malloc (sizeof(struct Node));   
    second  = ( struct Node * ) malloc (sizeof(struct Node));
    third  = ( struct Node * ) malloc (sizeof(struct Node)); 

    head->data = 1;
    second->data = 2;
    third->data = 3;

    head->next = second;
    second->next = third;
    third->next = NULL;

    ispis(head);
    // nije neophodno, jer je kraj programa...
    free(head); free(second); free(third);

    return 0; }