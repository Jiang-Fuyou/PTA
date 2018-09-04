#include <math.h>
#include <iostream>
#include <iomanip>
using namespace std;

const int N = 10001;

int main(int argc, char const* argv[])
{
    int n, real, imag;
    double max = 0.0;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> real >> imag;
        double tmp = sqrt(pow(real, 2) + pow(imag, 2));
        if (max < tmp) {
            max = tmp;
        }
    }

    cout << setprecision(2) << fixed << max << endl;

    return 0;
}
