#include<bits/stdc++.h>
using namespace std;
    // sve 0, dozvoljeni veci nizovi
int main() {  // vreme O(n), mem O(1) 
    int n; cin >> n;

    int upl;
    int naj = 0;
    int trenutno = 0;    
    for ( int i = 0; i < n; i++ ) {
        cin >> upl; 
        trenutno += upl;
        if (trenutno > naj)
            naj = trenutno;
        }


    cout << naj << '\n';




    return 0; }