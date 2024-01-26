#include <bits/stdc++.h>
using namespace std;

double razlomljeniRanac(const vector<int>& cena, const vector<int>& kolicina, int nosivostRanca) {
  int n = cena.size();
  vector<pair<double, int>> jedinicnaIkolicina(n);
  for (int i = 0; i < n; i++) {
    double jedinicnaCena = (double)cena[i] / (double)kolicina[i];
    jedinicnaIkolicina[i] = 
      make_pair(jedinicnaCena, kolicina[i]);
  }
  sort(begin(jedinicnaIkolicina), end(jedinicnaIkolicina),
  greater<pair<double, int>>());
  double ukupnaVrednost = 0.0;
  for (int i = 0; nosivostRanca > 0 && i < n; i++) {
    double jedinicnaCena = jedinicnaIkolicina[i].first;
    int kolicina = jedinicnaIkolicina[i].second;
    int uzetaKolicina = min(kolicina, nosivostRanca);
    nosivostRanca -= uzetaKolicina;
    ukupnaVrednost += uzetaKolicina * jedinicnaCena;
    }
  
  return ukupnaVrednost;
}

int main() {
  int n;
  cin >> n;
  vector<int> cena(n), kolicina(n);
  for (int i = 0; i < n; i++) {
    cin >> kolicina[i] >> cena[i];
  }
  int nosivost;
  cin >> nosivost;
  cout << fixed << showpoint << setprecision(2)<< razlomljeniRanac(cena, kolicina, nosivost) << endl;
  return 0;
}