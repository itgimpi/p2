#include <bits/stdc++.h>
using namespace std;

// Nerastuci poredak

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n; cin >> n;
    vector<int> a(n);
    // Dobro, koristi se din. alok.
    // za mali br el, malo mem...


    for(int i = 0; i < n; i++)
        cin >> a[i];

    // sort dozvoljava i 3. srg.
    sort(a.begin(), a.end(), greater<int>());
    //sort(begin(a), end(a));


    for(int i = 0; i < n; i++)
        cout << a[i] << '\n';


    return 0;
}
