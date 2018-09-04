#include <iostream>
#include <iomanip>
using namespace std;

const int N = 100000;

int main(int argc, char const* argv[])
{
    int n;
    double sum = 0;
    double a[N] = {0.0};

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            for (int k = i; k <= j; k++) {
                sum += a[k];
            }
        }
    }

    cout << setprecision(2) << fixed << sum << endl;

    return 0;
}
