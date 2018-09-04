#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int main(int argc, char *argv[])
{
    int c, m, n;
    cin >> c;

    int a[c];
    for (int i = 0; i < c; i++) {
        cin >> a[i];
    }
    sort(a, a + c);

    for (int m = sqrt(c); m < c; m++) {
        n = c / m;
        if (m * n == c) {
            break;
        }
    }

    int b[m][n];

    /* for (int i = 0; i < c; i++) { */
    /*     cout << a[i] << endl; */
    /* } */

    int i = 0, j = m - 1;
    for (int k = c - 1; k >= 0; k--) {
        for (; i < n; i++) {
            b[j][i] = a[k];
        }
        for (; i >= 0 ; j--) {
            b[j][i] = a[k];
        }
        for (; i >= 0; i--) {
            b[j][i] = a[k];
        }
        for (int i = 0; i < ; i++) {
            
        }


    }

    for (int i = 0; i < n; i++) {

    }



    return 0;
}
