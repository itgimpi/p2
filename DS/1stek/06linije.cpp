#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main() {
    stack<string> s;
    string linija;

    while (cin >> linija)
        s.push(linija);

    while (!s.empty()) {
        cout << s.top() << endl;
        s.pop(); }
        
    return 0;  }
