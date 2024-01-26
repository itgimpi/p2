#include <bits/stdc++.h>
using namespace std;

// spajamo dva sortirana niza u treci
vector<int> spoji(const vector<int>& a, const vector<int>& b) {
    vector<int> c(a.size() + b.size());
    merge(a.begin(), a.end(), b.begin(), b.end(), c.begin());
    return c; }

int main() {
    ios_base::sync_with_stdio(false);

    // ucitavamo prvi niz(zadaci A)
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
      cin >> a[i];

  // ucitavamo drugi niz(zadaci B)
    int m; cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; i++)
      cin >> b[i];

    // spajamo ih, merge(a.begin(), a.end(), b.begin(), b.end(), c.begin());
    vector<int> c = spoji(a, b);

    // rezultat
    for (int i = 0; i < c.size(); i++)
      cout << c[i] << " ";
    cout << endl;
 
  return 0;
}