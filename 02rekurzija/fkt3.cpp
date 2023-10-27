#include<bits/stdc++.h> // ZC rek
using namespace std;

// u Cu dve f-je mogu da imaju isto ime ali razl. broj argumenata...

// i je brojac, n je granica za brojac, res je resenje, rezultat
int f1( int i, int n, int res){ // 3 arg, omogucavaju repnu rek.
    if ( i > n ) return res; // BC
    return f1( i + 1, n, res * i); // repna rekurzija
}

int f1( int n ){ // f1 ima 1 arg. se razlikuje od f1 sa 3 arg.
    return f1( 1, n, 1); } // poziva f2 i postavlja pocetne vrednosti

int main() {
    int n; cin >> n;

    cout << f1(n) << '\n'; 




    return 0; }