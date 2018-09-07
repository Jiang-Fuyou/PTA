#include <iostream>
using namespace std;

const int N = 100000;

int main(int argc, char const* argv[])
{
    int n, id, sc;
    int score[N] = {0};

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> id >> sc;
        score[id] += sc;
    }

    int smax = 0, iter = 0;
    for (int i = 0; i < N; i++) {
        if (smax < score[i]) {
            smax = score[i];
            iter = i;
        }
    }

    cout << iter << " " << smax << endl;

    return 0;
}
