#include <bits/stdc++.h>
using namespace std;
// trobojka O(n)
// trosi se memorija n za niz a
// trosi se memorija n za nizove levo, desno, sred

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, l, d;
    int pl = 0, i, pd;
    cin >> n;
    pd = n;
    vector<int> a(n);
    for(i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> l >> d;
    i = 0;
    while(i < pd) { // TO-DO
        if(a[i] < l) {
            swap(a[pl++], a[i++]);
        }
        else if(a[i] > d) {
            swap(a[--pd], a[i]);
        }
        else {
            i++;
        }
    }
    i = 0;
    while(i < pl) {
        cout << a[i++] << ' ';
    }
    cout << '\n';
    while(i < pd) {
        cout << a[i++] << ' ';
    }
    cout << '\n';
    while(i < n) {
        cout << a[i++] << ' ';
    }
    cout << '\n';
    return 0; }