#include <bits/stdc++.h>
using namespace std;
// trobojka mem. n, inplace


int main() {
    int n; cin >> n;
    vector<int>a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    int levo, desno; cin >> levo >> desno;
    int l = 0, i = 0, d = a.size();

    while (i < d ) {

        if ( a[i] < levo ) 
            swap(a[i++], a[l++  ]);

        else if ( a[i] > desno ) 
            swap(a[i], a[--d]);

        else 
            i++;     }

    //ispis sva 3 vektora...
    i = 0;
    while ( a[i] < levo && i < a.size())
        cout << a[i++] << ' ';
    cout << '\n';



    return 0; }