#include<bits/stdc++.h> // ispis unazad
using namespace std;

void hanoi( int start, int tmp, int finish, int n ) {
    if ( n == 0 ) return;
    hanoi( start, finish, tmp, n-1); // prebaci n-1 sa start na tmp, using finish
    cout << "prebaci sa " << start << " na " << finish << endl;
    hanoi( tmp, finish, start, n-1); // prebaci n-1 sa tmp na finish, using start

    } 

int main() {
    int n; cin >> n;

    hanoi(1, 2, 3, n);

    return 0; }