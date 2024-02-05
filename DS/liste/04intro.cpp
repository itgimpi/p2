#include<bits/stdc++.h>
using namespace std;

class Node { // C++ solution
public:
    int data;
    Node *next; } ;

void ispis(Node *n){
    while (n != nullptr) {
        cout << n->data << ' ';
        n = n->next;  } }

int main() {
    // ako pokazivaci jos ne pokazuju na nista, vrednost je 0
    Node *head = nullptr; // 3 pointers to 3 nodes, but not yet
    Node *second = nullptr;
    Node *third = nullptr;
    // alokacija 3 cvora za 3 pokazivaca
    head  = ( Node * ) malloc (sizeof(struct Node));   
    second  = ( Node * ) malloc (sizeof(struct Node));
    third  = ( Node * ) malloc (sizeof(struct Node)); 

    head->data = 1;
    second->data = 2;
    third->data = 3;

    head->next = second;
    second->next = third;
    third->next = nullptr;

    ispis(head);

    delete third;
    delete second;
    delete head;
    

    return 0; }