#include <iostream>
#include <queue>
using namespace std;
int main() { // FIFO`
    queue<int> q;
    q.push(1); q.push(2); q.push(3); // u red idu 1, 2 i 3
    cout << q.size() << endl; // kolko ih ima?
    cout << q.front() << " " << q.back() << endl; // prvi i zadnji?

    q.pop(); cout << q.front() << " " << q.back() << endl; // 2 i 3
    q.pop(); cout << q.front() << " " << q.back() << endl; // 3
    q.pop(); //cout << s.top() << endl;                    // niko
    q.push(1); q.push(2); q.push(3);
    while (!q.empty()) { 
        cout << q.front() << " " << q.back() << endl; 
        q.pop(); } } 
