#include <bits/stdc++.h>
using namespace std;
// Максимални збир сегмента, https://petlja.org/biblioteka/r/Zbirka2/maksimalni_zbir_segmenta



int main() {
    int a[50010];

    int n; cin >> n;
    for (int i = 0; i < n; i++) 
        cin >> a[i];
    
    int naj = 0;
    int i = 0; // indeks elementa odakle se ispituje

    while ( i < n ) {
        int zbir = 0;
        int j;
        for ( j = i; j < n; j++ ) {
            zbir += a[j];
            if ( zbir < 0 )
                break;
            if ( zbir > naj ) // naj = max(naj, zbir)
                naj = zbir; }
        //i = i+1; sporo
        i = j + 1; // O(n)
    }
    cout << naj;
    

    return 0;
}