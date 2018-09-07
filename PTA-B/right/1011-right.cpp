#include <iostream>
using namespace std;

const int T = 10;

int main(int argc, char *argv[])
{
    int n;
    long long int a[T], b[T], c[T];

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i] >> c[i];
    }

    for (int i = 0; i < n; i++) {
        cout << "Case #" << i + 1 << ": ";
        if (a[i] + b[i] > c[i]) {
            cout << "true" << endl;
        } else {
            cout << "false" << endl;
        }
    }

    return 0;
}
