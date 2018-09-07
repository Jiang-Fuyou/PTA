#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int N = 100000;

int main(int argc, char *argv[])
{
    int n, p, tmp;
    vector<int> a, b;

    cin >> n >> p;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        a.push_back(tmp);
        b.push_back(0);
    }

    sort(a.begin(), a.end());

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (a[j] <= a[i] * p) {
                b[i]++;
            }
        }
    }

    int max = 0;
    for (int i = 0; i < n; i++) {
        if (max < b[i]) {
            max = b[i];
        }
    }

    cout << max << endl;

    return 0;
}
