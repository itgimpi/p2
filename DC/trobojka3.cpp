#include <bits/stdc++.h>
using namespace std;
// trobojka T(n) = n, + M(n) = n

int main() {
    int n; cin >> n;
    vector<int>a(n);
    
    vector<int>a1; // manji od levo
    vector<int>a2; // od levo do desno
    vector<int>a3; // veci od desno

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int l, d; cin >> l >> d;
    //int br1 = 0, br2 = 0, br3 = 0;

    for (int i = 0; i < n; i++) {
        if ( a[i] < l ) 
            a1.push_back(a[i]);

        else if ( a[i] > d ) 
            a3.push_back(a[i]);

        else 
            a2.push_back(a[i]);


    }

    for (int i = 0; i < a1.size(); i++)
        cout << a1[i] << ' '; 
    cout << endl;   

    for (int i = 0; i < a2.size(); i++)
        cout << a2[i] << ' '; 
    cout << endl; 

    for (int i = 0; i < a3.size(); i++)
        cout << a3[i] << ' '; 

    return 0; }
