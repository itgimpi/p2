#include<bits/stdc++.h>
using namespace std;
// O(sqrt)
bool prost( int n ) {
    if (n==1) return false;
    if (n==2 || n==3) return true;
    if (n%2==0 || n%3==0) return false;
    int koren = sqrt(n);
    for (int i = 3; i <= koren; i+=2)
        if ( n % i == 0 )
            return false;
    return true; }

int main() {
    int n; cin >> n;
    if ( prost(n) ) cout << "DA";
    else cout << "NE"; 
    
    return 0; }