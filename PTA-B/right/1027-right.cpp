#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const* argv[])
{
    int n;
    int layer, nused, nrest;
    char c;

    cin >> n >> c;

    layer = int(sqrt((n + 1) / 2));
    nused = 2 * pow(layer, 2) - 1;
    nrest = n - nused;

    /* cout << layer << endl; */
    /* cout << nused << endl; */
    /* cout << nrest << endl; */

    for (int i = layer - 1; i >= 0 ; i--) {
        for (int j = 0; j < layer - 1 - i; j++) {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << c;
        }
        cout << endl;
    }
    for (int i = 1; i <= layer - 1; i++) {
        for (int j = 0; j < layer - 1 - i; j++) {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << c;
        }
        cout << endl;
    }

    cout << nrest << endl;

    return 0;
}

