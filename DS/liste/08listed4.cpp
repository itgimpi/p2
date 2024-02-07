#include<bits/stdc++.h>
using namespace std;
// Doubly Linked Lists
class node { // C++ solution
public:
    int data;
    node *prev;     // prethodnik
    node *next; } ; // sledbenik
node * head = nullptr; // samo 1 glob. pok.

void napocetak(int podatak){ // pre prvog elementa
    node *novi = new node;
    novi->data = podatak;
    novi->next = head;
    novi->prev = nullptr;
    if (head != nullptr)
        head->prev = novi;
    head = novi; }

void oduzmi(){ // pre elementa
    if ( head == nullptr ) // empty list
        return;
    // non-empty list
    node *tmp = head;    
    head = head->next;
    if (head != nullptr) 
        head->prev = nullptr;
    delete tmp; }

void nakraj(int podatak){ // posle zadnjeg elementa
    node *novi = new node;
    novi->data = podatak;
    novi->next = nullptr;
    if ( head == nullptr ) { // empty
        novi->prev = nullptr;
        head = novi;
        return; }
    // nonempty
    // find the last element
    node *zadnji = head;
    while ( zadnji->next != nullptr )
        zadnji = zadnji->next;
    zadnji->next = novi;
    novi->prev = zadnji;
    return; }

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
    
    napocetak(1); ispis();
    napocetak(2); ispis();
    napocetak(3); ispis();
    oduzmi(); ispis();
    oduzmi(); ispis();oduzmi(); ispis();oduzmi(); ispis();
    nakraj(1); ispis();
    nakraj(2); ispis();
    //oslobodi();
    
    //ispis();
    return 0; }