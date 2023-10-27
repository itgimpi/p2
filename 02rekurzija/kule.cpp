#include<bits/stdc++.h>
using namespace std;

int br = 0;

void kule( int start, int tmp, int finish, int n ) {
    if ( n > 0 ) { // BC
    kule( start, finish, tmp, n-1 ); 
    cout << ++br << ". prebaci sa " << start << " na " << finish << endl;
    kule( tmp, start, finish, n-1 ); } 
}

int main() {
    int n; cin >> n;

    kule(1, 2, 3, n);

    return 0; }