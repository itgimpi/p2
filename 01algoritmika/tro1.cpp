#include <bits/stdc++.h>
using namespace std;
// trobojka O(n log n)


int main() {
    int n, l, d;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> l >> d;
    sort(a.begin(), a.end());
    int i = 0;
    for(i = 0; a[i] < l; i++) {
        cout << a[i] << ' ';
    }
    cout << '\n';
    for(; a[i] <= d; i++) {
        cout << a[i] << ' ';
    }
    cout << '\n';
    for(; i < n; i++) {
        cout << a[i] << ' ';
    }
    cout << '\n';
    return 0; }