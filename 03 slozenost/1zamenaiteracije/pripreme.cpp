#include<bits/stdc++.h>
using namespace std;

 

int main() {
    int n, a, d; cin >> n;
    
    while ( cin >> a >> d ) {
        long long uk = 0;
        for ( int i = 0; i < n; i++ ) { 
            
            uk += a;
            a += d;    }

        double km = uk / 1000.0;
        cout << fixed << showpoint << setprecision(2) << km << endl;

     }
    return 0; }