#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(int argc, char const* argv[])
{
    string d;
    int n, a[10] = {0};
    cin >> d >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < d.length(); j++) {
            a[d[j] - '0']++;
        }
        d.erase(d.begin(), d.end());
        for (int i = 0; i <= 9; i++) {
            d.append(char(i));
            d.append(char(a[i]));
        }
    }

    cout << d << endl;

    return 0;
}
