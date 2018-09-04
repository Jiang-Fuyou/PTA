#include <iostream>
#include <set>
#include <vector>
using namespace std;

const int N = 1000;

int main(int argc, char const* argv[])
{
    int a[N][N] = {0};
    int x, y, tol, tmp;
    set<int> s;
    vector<int> target;

    cin >> x >> y >> tol;
    for (int j = 0; j < y; j++) {
        for (int i = 0; i < x; i++) {
            cin >> a[j][i];
            if (s.count(a[j][i] == 0)) {
                s.insert(a[j][i]);
            }
            if (s.count(a[j][i] == 1)) {

            }
        }
    }

    for (map<int, int>::iterator it = m.begin(); it != m.end(); ++it) {
    }

    for (int k = 0; k < target.size(); k++) {
        for (int j = 0; j < y; j++)
        for (int i = 0; i < x; i++) {
            bool is_target = true;
            if (a[j][i] == target[k]) {
                for (int jj = -1; jj <= 1; jj++)
                for (int ii = -1; ii <= 1; ii++) {
                    if (!(ii == 0 && jj == 0)) {
                        if (abs(a[j + jj][i + ii] - a[j][i]) < tol) {
                            is_target = false;
                            break;
                        }
                    }
                }
            }
            if (is_target) {
                cout << "(" << j << ", " << i << "): " << a[j][i] << endl;
            }
        }
    }

    return 0;
}
