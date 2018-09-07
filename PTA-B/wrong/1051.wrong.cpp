#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

typedef struct {
    double r;
    double i;
} Complex;

int main(int argc, char *argv[])
{
    Complex c1, c2, result;
    double r1, p1, r2, p2;
    cin >> r1 >> p1 >> r2 >> p2;

    c1.r = r1 * cos(p1);
    c1.i = r1 * sin(p1);
    c2.r = r2 * cos(p2);
    c2.i = r2 * sin(p2);

    result.r = c1.r * c2.r - c1.i * c2.i;
    result.i = c1.r * c2.i + c2.r * c1.i;

    cout << setprecision(2) << fixed;
    if (result.i >= 0) {
        cout << result.r << "+" << fabs(result.i) << "i" << endl;
    } else {
        cout << result.r << "-" << fabs(result.i) << "i" << endl;
    }



    return 0;
}
