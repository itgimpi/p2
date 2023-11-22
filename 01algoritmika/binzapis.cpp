#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    vector<int> binzapis(32);
    int n, i = 0;
    cin >> n;
    while(n > 0) {
        binzapis[31 - i] = n % 2;
        n /= 2;
        i++;
    }
    for(int i = 0; i < 32; i++) {
        cout << binzapis[i];
    }
    return 0;
}
