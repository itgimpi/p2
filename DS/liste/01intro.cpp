#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next; } ;

void ispis(struct Node *n){
    while (n != nullptr) {
        cout << n->data << ' ';
        n = n->next;  } }

int main() {
    // ako pokazivaci jos ne pokazuju na nista, vrednost je 0
    struct Node *head = nullptr; // 3 pointers to 3 nodes, but not yet
    struct Node *second = nullptr;
    struct Node *third = nullptr;

    // alokacija 3 cvora za 3 pokazivaca
    head  = new Node; // head  = new Node();   
    head  = new Node;
    head  = new Node; 

    head->data = 1;
    second->data = 2;
    third->data = 3;

    head->next = second;
    second->next = third;
    third->next = nullptr;

    ispis(head);

    return 0; }