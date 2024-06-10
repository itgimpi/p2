#include <bits/stdc++.h>
using namespace std;
// Број инверзија
typedef long long int ll;

ll inv(vector<int>&a, int l, int d, vector<int>&b) {
    if ( l >= d ) return 0; // bar 2 el
    int s = l + (d-l) / 2; // pola
    ll res = 0;
    // br. inv = br. inv. levo + desno + izmedju
    res += inv( a, l, s, b ); // levo
    res += inv( a, s+1, d, b ); // desno, fali samo izmedju
    int pl = l; // pok. na levi deo
    int pd = s+1; // pok. na desni
    int pb = 0; // pok. na pomocni

    while ( pl <= s && pd <= d ) {
        if ( a[pl] <= a[pd] ) // levi je manji =
            b[pb++] = a[pl++];
        else {
            b[pb++] = a[pd++];
            res += s - pl + 1;     }  }
    while ( pl <= s ) b[pb++] = a[pl++];
    while ( pd <= d ) b[pb++] = a[pd++];

    for ( int i = 0; i < d-l+1; i++ ) a[l+i] = b[i];
    return res;

}

int main() {
    int n; cin >> n;
    vector<int>a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<int>tmp(n);
    cout << inv(a, 0, n-1, tmp); // niz, lg, dg, pomocni

    return 0; }
