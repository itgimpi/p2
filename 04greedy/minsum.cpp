#include <bits/stdc++.h>
using namespace std;
// Минимална сума два броја формирана од датих цифара
// https://petlja.org/biblioteka/r/Zbirka2/min_suma_od_cifara

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n; cin >> n;
    vector<int>a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    if (n%2==1){ // ako je neparan br. el.
        a.resize(n+1);
        a[n]=0; }

    sort(begin(a), end(a));

    long long resenje = 0; // trazeni zbir
    long long vrednost = 1; // 1, 10, 100, 1000, ...

    for (int i = a.size()-2; i >= 0; i-=2) {
        resenje += (a[i] + a[i+1]) * vrednost;
        vrednost *=10;
    }
    
    cout << resenje;
    return 0; }
