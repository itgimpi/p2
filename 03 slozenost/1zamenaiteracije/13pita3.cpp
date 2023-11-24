#include <bits/stdc++.h>
using namespace std;
// n~5000, n^2~10^7, OK
// Brute Force, malo bolji
// https://petlja.org/biblioteka/r/Zbirka2/pitagorine_trojke

int main() { // O(n^2)
    int n; cin >> n;
    
    for ( int a = 1; 2*a*a <= n*n; a++ )
        for ( int b = a+1; a*a + b*b <= n*n; b++ ) { 
            // c se prosto izracuna... gubi se treca petlja...
            int c = sqrt(a * a + b * b);
            if ( a*a+b*b == c*c )
                cout << a << ' ' << b << ' ' << c << '\n'; }
    
}
