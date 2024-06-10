#include <bits/stdc++.h>
using namespace std;
// broj sortiranih trojki, BF

int main() {
    int n; cin >> n;
    vector<int>a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    long long int res = 0;

    for (int levi = 0; levi < n-1; levi++)
        for (int srednji = levi + 1; srednji < n-1; srednji++)
            for (int desni = srednji + 1; desni < n; desni++)
                // sortirana trojka?
                if ( a[levi] < a[srednji] && a[srednji] < a[desni] )
                    res++;
    
    res %= 1000000000; // zadnjih 9 cifara
    cout << res;
    

    return 0; }
