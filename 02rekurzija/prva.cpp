#include<bits/stdc++.h> // ispis unazad
using namespace std;

void ispis( int n ) {
    if ( n < 0 ) return;
    ispis( n-1 );
    cout << n << endl; }

void ispis2( int n ) {
    if ( n < 0 ) return;
    cout << n << endl;
    ispis2( n-1 ); }

int main() {
    int n; cin >> n;

    ispis(n); cout << '\n';
    ispis2(n); cout << '\n';
    return 0; }