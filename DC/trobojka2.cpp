#include <bits/stdc++.h>
using namespace std;
// trobojka T(n) = n, + M(n) = 3n

int main() {
    int n; cin >> n;
    vector<int>a(n);

    vector<int>a1(n); // manji od levo
    vector<int>a2(n); // od levo do desno
    vector<int>a3(n); // veci od desno

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int l, d; cin >> l >> d;
    int br1 = 0, br2 = 0, br3 = 0;

    for (int i = 0; i < n; i++) {
        
        if ( a[i] < l ) {
            a1[br1] = a[i];
            br1++;
        }

        else if ( a[i] > d ) {
            a3[br3] = a[i];
            br3++;
        }

        else {
            a2[br2] = a[i];
            br2++;
        }

    }

    for (int i = 0; i < br1; i++)
        cout << a1[i] << ' '; 
    cout << endl;   

    for (int i = 0; i < br2; i++)
        cout << a2[i] << ' '; 
    cout << endl; 

    for (int i = 0; i < br3; i++)
        cout << a3[i] << ' '; 

    return 0; }
