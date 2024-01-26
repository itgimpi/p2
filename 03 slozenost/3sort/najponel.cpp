#include <bits/stdc++.h>
using namespace std;

int nadji_najveci_duplikat(int n, int niz[]) {
    sort(niz, niz + n);
    for (int i = n - 1; i > 0; i--) {
        if (niz[i] == niz[i + 1]) {
            return niz[i];
        }
    }
    return -1;
}

int main() {
    int n;
    cin >> n;
    int niz[n];
    for (int i = 0; i < n; ++i) {
        cin >> niz[i];
    }
    int rezultat = nadji_najveci_duplikat(n, niz);

    if (rezultat != -1) {
        cout << rezultat << endl;
    } else {
        cout << "nema" << endl;
    }
    return 0;
}
