#include <iostream>
using namespace std;

const int N = 100;

int main(int argc, char *argv[])
{
    int n;
    cin >> n;

    bool awin = false, bwin = false;
    int time = 0;
    int ahan = 0, ahua = 0, bhan = 0, bhua = 0;

    int count = 0;
    for (int i = 0; i < n; i++) {
        cin >> ahan >> ahua >> bhan >> bhua;
        if (ahua == ahan + bhan && bhua == ahan + bhan) continue;

        if (ahua == ahan + bhan && !awin && !bwin) {
            awin = true;
            time = count;
        }
        if (bhua == ahan + bhan && !awin && !bwin) {
            bwin = true;
            time = count;
        }

        count++;
    }

    if (awin) {
        cout << time << " " << time + 1 << endl;
    } else {
        cout << time + 1 << " " << time << endl;
    }

    return 0;
}
