#include <bits/stdc++.h>
using namespace std;
// trobojka mem. n + n


int main() {
    int n; cin >> n;
    vector<int>a(n), levo, desno, sredina;
    for (int i = 0; i < n; i++) cin >> a[i];
    int l, d; cin >> l >> d;
    int brl = 0, brd = 0, brs = 0;

    for (int i = 0; i < n; i++) {
        if ( a[i] < l ) {
            levo.push_back(a[i]);
            brl++; }
        else if ( a[i] > d ) {
            desno.push_back(a[i]);
            brd++;  }
        else {
            sredina.push_back(a[i]);
            brs++;
        }
    }

    //ispis sva 3 vektora...



    return 0; }