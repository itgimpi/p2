#include <bits/stdc++.h>
using namespace std;
// Сортирање пребројавањем 
// https://petlja.org/biblioteka/r/Zbirka2/counting_sort




int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int m; cin >> m; // broj brojeva
    int n; cin >> n; // uk. broj

    vector<int>a(n); // nije obavezno
    for ( int i = 0; i < n; i++ )
        cin >> a[i];

    vector<int>brojpoj(m, 0);

    for ( int i = 0; i < n; i++ )
        brojpoj[a[i]]++;

    int k = 0;
    for ( int i = 0; i < m; i++ )
        for ( int j = 0; j < brojpoj[i]; j++)
            a[k++] = i;    
    
    for ( int i = 0; i < n; i++ )
        cout << a[i] << '\n';    


   

    return 0;
}
