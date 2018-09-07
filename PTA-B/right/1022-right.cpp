#include <iostream>
#include <string>
#include <sstream>
using namespace std;

const int N = 31;

int main(int argc, char *argv[])
{
    int A, B, D;
    int R;
    int RD[N] = {0};

    cin >> A >> B >> D;
    R = A + B;


    /* A + b == 0 is needed to consider. */
    if (R == 0) {
        cout << 0;
    } else {
        int i = 0;

        while (R > 0) {
            RD[i] = R % D;
            R = R / D;
            i++;
        }

        for (int j = i - 1; j >= 0; j--) {
            cout << RD[j];
        }
    }

    cout << endl;


    return 0;
}
