#include <iostream>
#include <algorithm>
using namespace std;

const int N = 101;

int main(int argc, char *argv[])
{
    int n, M;
    int t, o[N - 1] = {0};
    int r[N] = {0};
    cin >> n >> M;

    for (int i = 0; i < n; i++) {
        cin >> t;
        for (int j = 0; j < n - 1; j++) {
            cin >> o[j];
            if (o[j] < 0) o[j] = -1;
            if (o[j] > M) o[j] = -1;
        }

        sort(o, o + n - 1);

        cout << t << " ";
        for (int j = 0; j < n - 1; j++) {
            cout << o[j] << " ";
        }
        cout << endl;

        /* double avg1 = 0; */
        /* int count = 0; */
        /* for (int j = 0; j < n - 1; j++) { */
        /*     if (o[j] != -1) { */
        /*         avg1 += o[j]; */
        /*         count++; */
        /*     } */
        /* } */
        /* avg1 /= count; */

        /* double avg2 = (avg1 + t) / 2; */

        /* if (avg2 - int(avg2) > 0.5) { */
        /*     r[i] = int(avg2) + 1; */
        /* } else { */
        /*     r[i] = int(avg2); */
        /* } */
    }

    return 0;
}
