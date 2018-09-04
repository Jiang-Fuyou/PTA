#include <iostream>
using namespace std;

const int N = 101;
const int K = 100000;

int main(int argc, char const* argv[])
{
    int n, m, tmp;
    int score[N] = {0};
    int search[K] = {0};

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        score[tmp]++;
    }

    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> search[i];
    }

    for (int i = 0; i < m - 1; i++) {
        cout << score[search[i]] << " ";
    }
    cout << score[search[m - 1]] << endl;

    return 0;
}
