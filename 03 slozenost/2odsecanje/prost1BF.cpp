#include<bits/stdc++.h>
using namespace std;

bool prost( int n ) {
    if (n==1) return false;
    for (int i = 2; i < n; i++) // O(n), proverava se deljivost n i brojeva od 2 do n-1
        if ( n % i == 0 )
            return false;
    return true; }

int main() {
    int n; cin >> n;
    if ( prost(n) ) cout << "DA";
    else cout << "NE"; 
    
    return 0; }