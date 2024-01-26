#include <bits/stdc++.h>
using namespace std;

using namespace std;

// odredjuje najmanju razliku u broju cokoladica unutar odabranih
// paketa ako se bira k paketa medju paketima iz niza a
int minRazlika(vector<int>& a, int k) {
    int n = a.size();    // br paketa
    sort(begin(a), end(a));    // sortiramo pakete po broju cokoladica
    int min = numeric_limits<int>::max(); // odredjujemo i najmanju mogucu razliku
    for (int i = 0; i + k - 1 < n; i++) {
        int razlika = a[i + k - 1] - a[i];
    if (razlika < min)
        min = razlika; }
    return min; }

int main() {
  ios_base::sync_with_stdio(false);
  int n; cin >> n;   //br cokoladica u paketima
  vector<int> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];
  int k; cin >> k;    //br dece

  // odredjujemo i najmanju mogucu razliku za nekih k odabranih paketa
  cout << minRazlika(a, k) << endl;
   
  return 0;}

  // g++ .\imeprograma.cpp        .\a.exe