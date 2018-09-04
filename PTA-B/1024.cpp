#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int i = 0;

    // find the position of 'E'
    while (s[i] != 'E') i++;

    // cut string before 'E', not include '+' or '-'
    string t = s.substr(1, i-1);

    // transfer string after 'E' to int
    int n = stoi(s.substr(i+1));

    // if minus, output '-';
    if (s[0] == '-') cout << "-";

    // if n < 0
    if (n < 0) {
        cout << "0.";
        // number of 0 to add
        for (int j = 0; j < abs(n) - 1; j++) cout << '0';
        for (int j = 0; j < t.length(); j++)
            if (t[j] != '.') cout << t[j];
    } else { // if n > 0
        cout << t[0];
        int cnt, j;
        // from j = 2, leave out the '.'
        for (j = 2, cnt = 0; j < t.length() && cnt < n; j++, cnt++)
            cout << t[j];

        // append '0'
        if (j == t.length()) {
            for (int k = 0; k < n - cnt; k++) cout << '0';
        } else { // not append
            cout << '.';
            for (int k = j; k < t.length(); k++) cout << t[k];
        }
    }
    return 0;
}
