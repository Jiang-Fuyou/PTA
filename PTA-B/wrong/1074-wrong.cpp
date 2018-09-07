#include <iostream>
#include <string>
#include <cstring>
using namespace std;

const int N = 20;

int main(int argc, char const* argv[])
{
    int count = 0;
    int t[N], a[N], b[N], c[N];

    memset(t, -1, N * sizeof(int));
    memset(a, -1, N * sizeof(int));
    memset(b, -1, N * sizeof(int));
    memset(c, -1, N * sizeof(int));

    string ts, as, bs;

    cin >> ts >> as >> bs;

    count = 0;
    for (int i = ts.length() - 1; i >= 0; i--) {
        t[N - 1 - count] = ts[i] - '0';
        count++;
    }
    count = 0;
    for (int i = as.length() - 1; i >= 0; i--) {
        a[N - 1 - count] = as[i] - '0';
        count++;
    }
    count = 0;
    for (int i = bs.length() - 1; i >= 0; i--) {
        b[N - 1 - count] = bs[i] - '0';
        count++;
    }

    /* for (int i = 0; i < N; i++) { */
    /*     if (t[i] == -1) { */
    /*         cout << " "; */
    /*     } else { */
    /*         cout << t[i]; */
    /*     } */
    /* } */
    /* cout << endl; */
    /* for (int i = 0; i < N; i++) { */
    /*     if (a[i] == -1) { */
    /*         cout << " "; */
    /*     } else { */
    /*         cout << a[i]; */
    /*     } */
    /* } */
    /* cout << endl; */
    /* for (int i = 0; i < N; i++) { */
    /*     if (b[i] == -1) { */
    /*         cout << " "; */
    /*     } else { */
    /*         cout << b[i]; */
    /*     } */
    /* } */
    /* cout << endl; */


    for (int i = N - 1; i >= N - ts.length(); i--) {
        cout << t[i];
    }
    cout << endl;

    return 0;
}
