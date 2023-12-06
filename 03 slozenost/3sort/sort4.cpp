#include <bits/stdc++.h>
using namespace std;

// Nije rastuci, nego je neopadajuci poredak

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n; cin >> n; // zna se dim. problema...

    vector<int> a(n);

    // Dobro, koristi se din. alok.
    // za mali br el, malo mem...


    for(int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    //sort(begin(a), end(a)); // od prvog do zadnjeg
    //sort(a.begin()+1, a.end()-2); // od drugog do predpredzadnjeg

    for(int i = 0; i < n; i++)
        cout << a[i] << '\n';


    return 0;
}
