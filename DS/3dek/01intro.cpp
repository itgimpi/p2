#include <iostream>
#include <deque>
using namespace std;
int main() { // FIFO
    deque<int> dq; // kao red
    dq.push_back(1); dq.push_back(2); dq.push_back(3); // u dek idu 1, 2 i 3
    cout << dq.size() << endl; // kolko ih ima?
    cout << dq.front() << " " << dq.back() << endl; // prvi i zadnji?
    dq.pop_front(); cout << dq.front() << " " << dq.back() << endl; // 2 i 3
    dq.pop_front(); cout << dq.front() << " " << dq.back() << endl; // 3
    dq.pop_front(); //cout << s.top() << endl; // niko

    dq.push_front(1); dq.push_front(2); dq.push_front(3); // 3, 2, 1

    while (!dq.empty()) {     // ne kao red
        cout << dq.front() << " " << dq.back() << endl; 
        dq.pop_front(); } 
    
        } 
