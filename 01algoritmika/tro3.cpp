#include <bits/stdc++.h>
using namespace std;
// trobojka O(n)
// trosi se memorija n za niz a
// trosi se memorija n za nizove levo, desno, sred

int main() {
    int n, l, d;
    cin >> n;
    vector<int> a(n);
    vector<int> levo, desno, sred;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> l >> d;
    for(int i = 0; i < n; i++) {
        if(a[i] < l) {
            levo.push_back(a[i]);
        }
        else if(a[i] > d) {
            desno.push_back(a[i]);
        }
        else {
            sred.push_back(a[i]);
        }
    }
    for(int i = 0; i < levo.size(); i++) {
        cout << levo[i] << ' ';
    }
    cout << '\n';
    for(int i = 0; i < sred.size(); i++) {
        cout << sred[i] << ' ';
    }
    cout << '\n';
    for(int i = 0; i < desno.size(); i++) {
        cout << desno[i] << ' ';
    }
    cout << '\n';
    return 0; }