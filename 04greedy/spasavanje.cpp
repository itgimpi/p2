#include <bits/stdc++.h>

using namespace std;

int minBrojCamaca(int nosivost, vector<int>& mase) {
    sort(mase.begin(), mase.end());
   
    int brojCamaca = 0;
    int levo = 0, desno = mase.size() - 1;
   
    while (levo <= desno) {
        if (mase[levo] + mase[desno] <= nosivost) {
            levo++;
            desno--;
        } else {
            desno--;
        }
        brojCamaca++;
    }
   
    return brojCamaca;
}

int main() {
    ios_base::sync_with_stdio(false);     cin.tie(0);    cout.tie(0);

    int nosivost, n;
    cin >> nosivost >> n;

    vector<int> mase(n);
    for (int i = 0; i < n; ++i) {
        cin >> mase[i];
    }

    int minBroj = minBrojCamaca(nosivost, mase);
    cout << minBroj << endl;

    return 0;
}