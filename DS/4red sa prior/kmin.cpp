#include <bits/stdc++.h>
using namespace std;
int main() { // odredi k najmanjih elemenata
    int n, k; cin >> n >> k;
    priority_queue <int> pq;

    for ( int i = 0; i < n; i++) {
        int x; cin >> x;

        if ( pq.size() < k )
            pq.push(x);
        else if ( pq.size() == k && x < pq.top() ) {
            pq.pop();
            pq.push(x);
        }
    }

    while ( !pq.empty() ) {
        cout << pq.top() << ' ';
        pq.pop();
    }
    
    

        
} 
