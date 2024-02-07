#include<bits/stdc++.h>
using namespace std;
// head iz main-a se menja rezultatom f-je
class node { // C++ solution
public:
    int data;
    node *next; } ;

node *dodaj(node * glava, int podatak){ // pre elementa
    node * novi = new node;
    novi->data = podatak;
    novi->next = glava;
    return novi; }

node *oduzmi(node * glava){ // pre elementa
    node *tmp = glava;
    if ( glava == nullptr )
        return glava; //return nullptr;
    glava = glava->next;
    delete tmp; 
    return glava; }

void ispis(node *n){
    while (n != nullptr) {
        cout << n->data << ' ';
        n = n->next;  } 
    cout << endl; }

/*void oslobodi(node * glava){
    node * tmp;
    while ( glava != nullptr ) {
        tmp=glava->next;
        delete glava;
        glava = tmp;
    }
    return nullptr;
}*/

int main() {
    node * head = nullptr; // samo 1 pok.
    head = dodaj(head, 1); ispis(head);
    head = dodaj(head, 2); ispis(head);
    head = dodaj(head, 3); ispis(head);
    head = oduzmi(head); ispis(head);
    //oslobodi(head);
    
    //ispis(head);
    return 0; }