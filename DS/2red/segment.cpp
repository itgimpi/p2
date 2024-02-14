#include <bits/stdc++.h>
using namespace std;
int main() { // segment niza sa najvecim zbirom, vreme O(n), mem O(k)
    int n, k; cin >> n >> k;
    queue<int>q;
    int zbir = 0; // zbir elemenata u redu
    int najzbir = 0; // najveci moguci zbir
    for ( int i = 0; i < k; i++ ) { // prvih k u red
        int x; cin >> x;
        q.push(x);
        zbir += x; }

    int indnaj = 0;
    for ( i = k; i < n; i++ ) {
        int x; cin >> x;
        zbir = zbir - q.front() + x; // zbir al u redu se azurira
        q.pop(); // izbaci prvi
        q.push(x); // novi u red
        if ( zbir >= najzbir ) { // najdesniji
            najzbir = zbir;
            indnaj = i;  }  }


    cout << indnaj;


        
} 
