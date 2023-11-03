#include<bits/stdc++.h>
using namespace std;

long long red ( long long k ) {
    return (2 * k  - 1) * (  k * k - k + 1); }  

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n; scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        long long k;
        scanf("%d", &k);
        printf("%d\n", red(k));     }



    return 0; }