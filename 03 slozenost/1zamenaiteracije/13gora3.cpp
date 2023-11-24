#include <bits/stdc++.h>
using namespace std;

// O(n^2), n < 5000, 10^7
// Brute Force https://petlja.org/biblioteka/r/Zbirka2/pitagorine_trojke

int main() {

    int n;
    cin >> n;
    for(int a = 3; 2*a*a <= n*n; a++) {
        for(int b = a+1; a*a + b*b <= n*n; b++) {
            int c = sqrt(a*a + b*b);
            if(a*a + b*b == c*c) {
                cout << a << ' ' << b << ' ' << c << '\n';
            }
        }
    }
    return 0;
}
