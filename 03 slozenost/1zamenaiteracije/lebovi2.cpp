#include <bits/stdc++.h>
using namespace std;
/* https://petlja.org/biblioteka/r/Zbirka2/hlebovi
m + z + d = n (1)
2m + z + d/2 = n (2)
m = d / 2 (1,2)
3m + z = n

S = {m, n - 3m, 2m}, skup rešenja
zbog člana n - 3m, vrednosti za m su: 0, 1, ... int n / 3,
tako da je ukupan broj rešenja int n / 3 + 1
*/

int main() {
    int n;
    
    cout << n / 3 + 1;  }
