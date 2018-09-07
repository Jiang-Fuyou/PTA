#include <iostream>
using namespace std;

const int N = 9;

int main(int argc, char const* argv[])
{
    int n, sum = 0;
    int a[N] = {0};

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        sum += (n - 1) * 11 * a[i];
        /* sum += (n - 1) * 10 * a[i] + (n - 1) * a[i]; */
    }

    cout << sum << endl;

    return 0;
}
