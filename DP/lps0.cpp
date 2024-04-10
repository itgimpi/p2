#include <bits/stdc++.h>
using namespace std;
// lps rek.

int lps(const string &s, int l, int d){
    if ( l > d ) return 0;
    if ( l == d ) return 1;
    if ( s[l] == s[d] )
        return lps(s, l+1, d-1) + 2;
    return max(lps(s, l+1, d),
               lps(s, l, d-1) );

}

int main() {
    string s; cin >> s;
    cout << lps(s, 0, s.length()-1);
    return 0; }
