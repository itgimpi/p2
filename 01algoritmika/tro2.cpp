#include <bits/stdc++.h>
using namespace std;
// trobojka O(n) nizovi
// trosi se memorija n
// trosi se memorija 3n

int main() {
    int n, l, d;
    int br_l = 0, br_d = 0, br_s = 0;
    cin >> n;
    int a[n];
    int levo[n], desno[n], sred[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> l >> d;
    for(int i = 0; i < n; i++) {
        if(a[i] < l) {
            levo[br_l] = a[i];
            br_l++;
        }
        else if(a[i] > d) {
            desno[br_d] = a[i];
            br_d++;
        }
        else {
            sred[br_s] = a[i];
            br_s++;
        }
    }
    for(int i = 0; i < br_l; i++) {
        cout << levo[i] << ' ';
    }
    cout << '\n';
    for(int i = 0; i < br_s; i++) {
        cout << sred[i] << ' ';
    }
    cout << '\n';
    for(int i = 0; i < br_d; i++) {
        cout << desno[i] << ' ';
    }
    cout << '\n';
    return 0; }