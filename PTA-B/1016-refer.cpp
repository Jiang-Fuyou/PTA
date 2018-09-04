#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    int m, n;
    cin >> a >> m >> b >> n;

    int counta = 0, countb = 0;
    for (int i = 0; i < a.length(); i++) {
        if (m == (a[i] - '0'))
            counta++;
    }
    for (int i = 0; i < b.length(); i++) {
        if (n == (b[i] - '0'))
            countb++;
    }
    int ta = 0, tb = 0;
    for (int i = 1; i <= counta; i++)
        ta = 10 * ta + m;
    for (int i = 1; i <= countb; i++)
        tb = 10 * tb + n;
    cout << ta + tb;
    return 0;
}
