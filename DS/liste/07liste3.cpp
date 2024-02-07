#include<bits/stdc++.h>
using namespace std;
// pointer head is global var.
class node { // C++ solution
public:
    int data;
    node *next; } ;
node * head = nullptr; // samo 1 glob. pok.

void dodaj(int podatak){ // pre elementa
    node * novi = new node;
    novi->data = podatak;
    novi->next = head;
    head = novi; }

void oduzmi(){ // pre elementa
    node *tmp = head;
    if ( head == nullptr )
        return;
    head = head->next;
    delete tmp; }

void ispis(){
    node *n = head;
    while (n != nullptr) {
        cout << n->data << ' ';
        n = n->next;  } 
    cout << endl; }

void oslobodi(){
    node * tmp;
    while ( head != nullptr ) {
        tmp=head->next;
        delete head;
        head = tmp;
    }

}

int main() {
    
    dodaj(1); ispis();
    dodaj(2); ispis();
    dodaj(3); ispis();
    oduzmi(); ispis();
    //oslobodi();
    
    //ispis();
    return 0; }