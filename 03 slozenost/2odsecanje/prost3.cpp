#include<bits/stdc++.h>
using namespace std;
// O(sqrt)
bool prost( int n ) {
    if (n==1) return false;
    if (n==2) return true;
    if (n%2==0) return false;

    for (int i = 3; i * i <= n; i+=2)
        if ( n % i == 0 )
            return false;
    return true; }

int main() {
    int n; cin >> n;
    if ( prost(n) ) cout << "DA";
    else cout << "NE"; 
    
    return 0; }