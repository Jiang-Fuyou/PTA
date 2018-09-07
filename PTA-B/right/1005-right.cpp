#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

const int N = 100;

int main(int argc, char const* argv[])
{
    int k;
    int a[N];
    int b[N] = {0};
    set<int> s[N];

    cin >> k;
    for (int i = 0; i < k; i++) {
        cin >> a[i];
    }

    sort(a, a + k);

    for (int i = 0; i < k; i++) {
        int tmp = a[i];
        while (tmp != 1) {
            if (tmp % 2 == 1) {
                tmp = (3 * tmp + 1) / 2;
            } else {
                tmp /= 2;
            }
            s[i].insert(tmp);
        }
    }

    int count = 0;
    for (int i = k - 1; i >= 0; i--) {
        for (int j = k - 1; j >= 0 ; j--) {
            if (j == i) {
                continue;
            }
            if (s[j].find(a[i]) != s[j].end()) {
                b[i] = 1;
                break;
            }
        }

        if (b[i] == 0) {
            if (count == 0) {
                cout << a[i];
            } else {
                cout << " " << a[i];
            }
            count++;
        }
    }
    cout << endl;

    return 0;
}
