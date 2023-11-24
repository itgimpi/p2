#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    unsigned long long n, x;
    cin >> n; // br. elemenata
    unsigned long long ostaci[] = {0, 0, 0}; // broje se ostaci 0, 1, 2 deljenje sa 3
    for(int i = 0; i < n; i++) {
        cin >> x;
        ostaci[x % 3]++;
    }
    unsigned long long resenje = 0;
    // parovi
    resenje += ostaci[0] * (ostaci[0] - 1) / 2;
    resenje += ostaci[1] * ostaci[2];
    // trojke
    resenje += ostaci[0] * (ostaci[0] - 1) * (ostaci[0] - 2) / 6;
    resenje += ostaci[1] * (ostaci[1] - 1) * (ostaci[1] - 2) / 6;
    resenje += ostaci[2] * (ostaci[2] - 1) * (ostaci[2] - 2) / 6;
    resenje += ostaci[0] * ostaci[1] * ostaci[2];
    cout << resenje << '\n';
    return 0;
}
