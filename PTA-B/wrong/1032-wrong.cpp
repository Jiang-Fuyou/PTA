#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

const int N = 100000;

int main(int argc, char const* argv[])
{
    int n;
    set<int> mount;
    int score[N] = {0};

    cin >> n;
    for (int i = 0; i < n; i++) {
        int id, sc;
        cin >> id >> sc;
        score[id] += sc;
        mount.insert(id);
    }

    int max = 0;
    for (int i = 0; i < mount.size(); i++) {
        if (max < score[i]) {
            max = score[i];
        }
    }

    for (int i = 0; i < mount.size(); i++) {
        if (max == score[i]) {
            cout << i << " " << max << endl;
        }
    }

    return 0;
}
