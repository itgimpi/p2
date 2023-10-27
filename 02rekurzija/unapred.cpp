#include<bits/stdc++.h> // ZC rek
using namespace std;

void ispis( int n ) {
    if ( n < 0 ) return; // BC
    cout << n << endl; 
    ispis( n - 1 ); } 

void ispis2( int n ) {
    if ( n < 0 ) return; // BC
    ispis2( n - 1 ); 
    cout << n << endl;  } 

int main() {
    int n; cin >> n;


    ispis(n); cout << '\n';
    ispis2( n ); cout << '\n';
    return 0; }