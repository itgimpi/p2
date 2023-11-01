#include<bits/stdc++.h>
using namespace std;

 

int main() {
    //ios_base::sync_with_stdio(false); cin.tie(0);
    int n, a, d; cin >> n;
    
    while ( cin >> a >> d ) {
        long long uk = (long long) n * (long long) ( 2 * a + (n - 1)*d ) / 2;


        double km = uk / 1000.0;
        cout << fixed << showpoint << setprecision(2) << km << endl;

     }
    return 0; }