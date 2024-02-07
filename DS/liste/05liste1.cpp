#include<bits/stdc++.h>
using namespace std;
// using pointer to pointer **
class node { // C++ solution
public:
    int data;
    node *next; } ;

void dodaj(node ** glava, int podatak){ // pre elementa
    node * novi = new node;
    novi->data = podatak;
    novi->next = *glava;
    *glava = novi; }

void oduzmi(node ** glava){ // pre elementa
    node *tmp = *glava;
    if ( *glava == nullptr )
        return;
    *glava = (*glava)->next;
    delete tmp; }

void ispis(node *n){
    while (n != nullptr) {
        cout << n->data << ' ';
        n = n->next;  } 
    cout << endl; }

void oslobodi(node ** glava){
    node * tmp;
    while ( *glava != nullptr ) {
        tmp=(*glava)->next;
        delete *glava;
        *glava = tmp;
    }

}

int main() {
    node * head = nullptr; // samo 1 pok.
    dodaj(&head, 1); ispis(head);
    dodaj(&head, 2); ispis(head);
    dodaj(&head, 3); ispis(head);
    oduzmi(&head); ispis(head);
    oslobodi(&head);
    
    //ispis(head);
    return 0; }