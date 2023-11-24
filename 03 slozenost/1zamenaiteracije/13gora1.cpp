#include <bits/stdc++.h>
using namespace std;

// O(n^3), n < 5000, 10^10
// Brute Force https://petlja.org/biblioteka/r/Zbirka2/pitagorine_trojke

int main() {

    int n;
    cin >> n;
    for(int a = 1; a <= n; a++) {
        for(int b = a; b <= n; b++) {
            for(int c = b; c <= n; c++) {
                if(a*a + b*b == c*c) {
                    cout << a << ' ' << b << ' ' << c << '\n';
                }
            }
        }
    }
    return 0;
}
