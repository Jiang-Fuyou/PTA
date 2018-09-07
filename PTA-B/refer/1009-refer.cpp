#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<string> s;
    string a;
    while(cin >> a) s.push(a);
    cout << s.top();
    s.pop();
    while(!s.empty()) {
        cout << " " << s.top();
        s.pop();
    }
    return 0;
}
