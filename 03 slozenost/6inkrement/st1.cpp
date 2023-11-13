#include<bits/stdc++.h>
using namespace std;
    int a[100000]; // sve 0, dozvoljeni veci nizovi
int main() {
    int n; cin >> n;
    //int a[100000];

    for ( int i = 0; i < n; i++ ) {
        cin >> a[i];     }

    int naj = 0;
    for (int i = 0; i < n; i++) {
        int zbir = 0;
        for (int ii = 0; ii <= i; ii++) 
            zbir += a[ii];
        if (zbir > naj)
            naj = zbir;
    }
    cout << naj << '\n';




    return 0; }