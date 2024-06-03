#include <bits/stdc++.h>
using namespace std;
// trobojka T(n) = n, inplace

int main() {
    int n; cin >> n;
    vector<int>a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int levo, desno; cin >> levo >> desno;
    int l = 0, i = 0, d = n;

    while ( i < d ) {

        if ( a[i] < levo ) // manji od leve granice
            swap(a[i++], a[l++]); // zamena i azuriranje...
        else if ( a[i] <= desno ) // izmedju leve i desne granice...
            i++; // azuriranje
        else // veci od desne granice...
            swap(a[i], a[--d]); // zamena i azuriranje
    }

    for (i = 0; i < n && a[i] < levo; i++)
        cout << a[i] << ' '; 
    cout << endl;  

    for ( ; i < n && a[i] <= desno; i++)
        cout << a[i] << ' '; 
    cout << endl;    

    for ( ; i < n; i++)
        cout << a[i] << ' '; 
    cout << endl;

    return 0; }
