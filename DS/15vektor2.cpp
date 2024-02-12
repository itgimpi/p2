#include <bits/stdc++.h>
using namespace std;

// vector<int>v(1000);
int *v = nullptr; // globalne prom.
int kapacitet = 0; // vector<int>v; najveci moguci br. el., menja se
int velicina = 0; // br. elemenata u vektoru

void alokacija( int novikapacitet ){
    int *v2 = new int[novikapacitet];
    kapacitet =  novikapacitet;
    if ( v!= nullptr ) { // ako nije prazan...
        copy_n(v, min(velicina, kapacitet), v2); // kap. se povecava ili smanjuje 
        delete [] v; // oslobodi niz na koji ukazuje v
    }
    v = v2; }

void dodaj(int vrednost){
    if ( kapacitet <= velicina ) // kapacitet je nedovoljan...
        alokacija( 2 * kapacitet + 1 ); // 0 -> 1, 100 -> 201
    v[velicina++] = vrednost; }

void ceo(){
    for (int i = 0; i < velicina; i++)
        cout << v[i] << ' '; // *(v + i)
    cout << endl; }



void stanje() {
    cout << "Velicina je: " << velicina << endl;
    cout << "Kapacitet je: " << kapacitet << endl; }

int ispis(int i) {
    return v[i];
}

int main() {
    dodaj(100); // v.push_back(100);
    dodaj(102);dodaj(103);dodaj(107);
    ceo(); // ispis celog vektora
    stanje();
    cout << ispis(3); // cout << v[i];


    return 0; }
