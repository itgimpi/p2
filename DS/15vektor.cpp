#include <bits/stdc++.h>
using namespace std;
int *v = nullptr; // globalne prom.
//  size          resize
int velicina = 0, kapacitet = 0; // vector<int>v;

void alokacija( int novikapacitet ){
    int *v2 = new int[novikapacitet];
    kapacitet = novikapacitet;
    if ( v != nullptr ) { // nije prazan
        copy_n(v, novikapacitet, v2);
        delete [] v;
    }
    //bio je prazan
    v = v2;

}

void dodaj(int vrednost){
    if ( kapacitet <= velicina)
        alokacija( velicina * 2 + 1 );
    v[velicina++] = vrednost; // *(v + vel)
}

void izbaci() {
    if ( velicina > 0 ) velicina--;
}



int main() {
    dodaj(100); // v.push_back(100);
    dodaj(200);
    izbaci();
    promeni(novik);

    for (int i = 0; i < velicina; i++)
        cout << v[i] << ' ';

    return 0; }
