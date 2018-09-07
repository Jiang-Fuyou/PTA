#include <cmath>
#include <iostream>
using namespace std;

const int N = 10000;

int main(int argc, char const* argv[])
{
    int n;
    int a[N] = {0};
    int r[N];

    for (int i = 0; i < N; i++) {
        r[i] = -1;
    }

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        r[abs(a[i] - i - 1)]++;
    }

    for (int i = N - 1; i >= 0; i--) {
        if (r[i] > 0) {
            cout << i << " " << r[i] + 1 << endl;
        }
    }

    return 0;
}
