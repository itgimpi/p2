#include<bits/stdc++.h> // ZC rek
using namespace std;

int zadnjaneg(int p, int i, int n){
    if ( i > n ) 
        return p;
    int t; cin >> t;
    if ( t < 0 ) return zadnjaneg( i, i + 1, n ); // temp. je neg.
    return zadnjaneg( p, i + 1, n);// temp nije neg.
    

}

int main() {
    int n; cin >> n;
    cout << zadnjaneg( -1, 1, n); // poz, br, n
    return 0; }