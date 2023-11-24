#include <bits/stdc++.h>
using namespace std;

// O(n^3), n < 5000, 10^10
// duplo bolje
// Brute Force https://petlja.org/biblioteka/r/Zbirka2/pitagorine_trojke

int main() {

    int n;
    cin >> n;
    for(int a = 3; 2*a*a <= n*n; a++) {
        for(int b = a+1; a*a + b*b <= n*n; b++) {
            for(int c = b+1; c <= n; c++) {
                if(a*a + b*b == c*c) {
                    cout << a << ' ' << b << ' ' << c << '\n';
                }
            }
        }
    }
    return 0;
}
