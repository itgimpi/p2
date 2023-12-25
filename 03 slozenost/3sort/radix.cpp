#include <bits/stdc++.h>
using namespace std;
//                      Radix Sort

void brojanje(vector<int>&a, int s){
    int f[10] = {0}; // za sve cifre frekv. poj. se postavi na 0
    for ( int i = 0; i < a.size(); i++) // 1 prolaz kroz niz...
        f[ a[i] / s % 10 ] ++; // jedinice, desetice, ....
    for ( int i = 1; i < 10; i++) // prefiksne sume
        f[i] += f[i-1];
    vector<int>pom(a.size());
    for ( int i = a.size()-1; i >= 0; i-- ) // sdesna na levo...
        pom[ --f[a[i]/s%10] ] = a[i];
    a = pom;

} 

void radixsort( vector<int>&a ) {
    //int naj = -1;
    int naj =numeric_limits<int>::min();
    for (int br : a) // nadji najveci, zbog broja cifara
        if (br > naj) naj = br;

// za naj = 568, s = 1, 10, 100. 568/1000 = 0
// za naj = 1234, s = 1, 10, 100, 1000.
    for ( int s = 1; naj / s > 0; s *= 10)
        brojanje(a, s); 
    }

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n; cin >> n;
    vector<int>a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    radixsort(a);
    
    for(int i = 0; i < n; i++) cout << a[i] << ' ';

    return 0; }
