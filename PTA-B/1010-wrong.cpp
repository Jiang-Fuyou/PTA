#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
    vector<int> c, d;
    int tmp;

    while (cin >> tmp) {
        c.push_back(tmp);
    }

    for (int i = 0; i < c.size() - 2; i++) {
        if (i % 2 == 0) {
            d.push_back(c[i] * c[i + 1]);
        } else {
            d.push_back(c[i] - 1);
        }
    }

    if (c[c.size() - 1] != 0) {
        d.push_back(c[c.size() - 2] * c[c.size() - 1]);
        d.push_back(c[c.size() - 2] - 1);
    }

    for (int i = 0; i < d.size() - 1; i++) {
        cout << d[i] << " ";
    }
    cout << d[d.size() - 1] << endl;

    return 0;
}
