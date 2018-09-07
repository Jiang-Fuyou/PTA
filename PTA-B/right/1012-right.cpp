#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

const int N = 1000;

int main(int argc, char *argv[])
{
    int n;
    int r[N] = {0};
    int A[5] = {0};

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> r[i];
    }

    int CA1 = 0, CA3 = 0;
    for (int i = 0; i < n; i++) {
        if (r[i] % 5 == 0 && r[i] % 2 == 0) {
            A[0] += r[i];
        }
        if (r[i] % 5 == 1) {
            if (CA1 % 2 == 0) {
                A[1] += r[i];
            } else {
                A[1] -= r[i];
            }
            CA1++;
        }
        if (r[i] % 5 == 2) {
            A[2]++;
        }
        if (r[i] % 5 == 3) {
            A[3] += r[i];
            CA3++;
        }
        if (r[i] % 5 == 4) {
            if (A[4] < r[i])
                A[4] = r[i];
        }
    }

    for (int i = 0; i < 5; i++) {
        if ((i != 1 && A[i] == 0) || i == 1 && CA1 == 0) {
            cout << "N";
        } else {
            if (i != 3) {
                cout << A[i];
            } else {
                cout << setprecision(1) << fixed << double(A[i]) / CA3;
            }
        }

        if (i != 4) {
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}
