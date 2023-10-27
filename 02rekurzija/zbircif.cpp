#include<bits/stdc++.h> // ZC rek
using namespace std;

int zc( int n) {
    //cout << n << " i " << n%10 << '\n';
    if ( n == 0 ) return 0;
  
    return zc( n / 10 ) + n % 10; }

int bc( int n) {
    if ( n == 0 ) return 0;
    return bc( n / 10 ) + 1; }

void ispis( int n ) {
    if ( n==0 ) 
        return;
    cout << n % 10;
    ispis( n/10 ); }

void ispis2( int n ) {
    if ( n==0 ) 
        return;
    
    ispis( n/10 ); 
    cout << n % 10; }

int main() {
    int n; cin >> n;

    cout << zc(n) << '\n';
    cout << bc(n) << '\n';
    ispis( n ); cout << '\n';
    ispis2( n ); cout << '\n';
    return 0; }