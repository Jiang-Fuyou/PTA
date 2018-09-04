#include <stdio.h>
#include <iostream>
using namespace std;

const int M = 500;
const int N = 500;

int main(int argc, char const* argv[])
{
    int a[M][N] = {0};
    int m, n, min, max, target;
    cin >> m >> n >> min >> max >> target;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] >= min && a[i][j] <= max) {
                a[i][j] = target;
            }
            printf("%03d", a[i][j]);
            if (j != n - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
