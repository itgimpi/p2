#include <bits/stdc++.h>
using namespace std;
// najserija pobeda, https://petlja.org/biblioteka/r/Zbirka2/najduza_serija_pobeda 

// bolji,                         vreme O(n), mem. O(1)

int main() {
    int n; cin >> n;
    //vector<int>a(n);
    //for (int i = 0; i < n; i++)
    //    cin >> a[i];

    int naj = 0;
    int duz = 0;

    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        if (a == 1)
            duz++;
        else {
            naj = max(naj, duz);
            duz = 0;
        }

    }
    naj = max(naj, duz); // zadnji niz pobeda
    cout << naj;


    return 0;
}