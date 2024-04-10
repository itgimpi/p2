#include <bits/stdc++.h>
using namespace std;
// lps rek.

int lps(const string &s, int l, int d){
    if ( l == d ) return 1;
    if ( l > d ) return 0;
    if ( s[l] == s[d] ) // isti?
        return lps(s, l+1, d-1) + 2;
    // nisu isti?
    return max( lps(s, l+1, d),
                lps(s, l, d-1 )  );
    



}

int main() {
    string s; cin >> s; // str
    cout << lps(s, 0, s.length()-1); // od 0 do n-1 poz.
    return 0; }
