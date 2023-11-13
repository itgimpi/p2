#include<bits/stdc++.h>
using namespace std;
    int a[100000]; // sve 0, dozvoljeni veci nizovi
int main() {  // vreme O(n), mem O(n) 
    int n; cin >> n;
    //int a[100000];

    for ( int i = 0; i < n; i++ ) {
        cin >> a[i]; }

    int naj = 0;
    int trenutno = 0;

    for (int i = 0; i < n; i++) {
        trenutno += a[i];
        if (trenutno > naj)
            naj = trenutno;
    }
    cout << naj << '\n';




    return 0; }