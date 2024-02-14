#include <bits/stdc++.h>
using namespace std;
// istorija pregledača - ručno implementiran stek koji može da čuva najvise 1000 adresa (tekst zadatka)
int main() { 
    string istorija[1000];
    int sp = 0; // pokazivač na naredno slobodno mesto na steku
    string linija; 
    while (getline(cin, linija)) {
        if (linija == "back") { 
            if (sp > 0)
                sp--;
            if (sp > 0)
                cout << istorija[sp-1] << endl;
            else
                cout << "-" << endl; }
        else {
            cout << linija << endl;
            istorija[sp++] = linija; } } } 
