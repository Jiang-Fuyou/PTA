#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct list {
    string addr;
    int    data;
    string next;
};

int main(int argc, char *argv[])
{
    int n, k;
    string addr;
    list ltmp;
    vector<list> tmp;
    vector<list> vlst;

    cin >> addr >> n >> k;

    for (int i = 0; i < n; i++) {
        cin >> ltmp.addr >> ltmp.data >> ltmp.next;
        tmp.push_back(ltmp);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n; j++) {
            if (tmp[j].addr == addr) {
                vlst.push_back(tmp[j]);
                addr = tmp[j].next;
                break;
            }
        }
    }
    for (int j = 0; j < n; j++) {
        if (tmp[j].next == "-1") {
            vlst.push_back(tmp[j]);
        }
    }

    cout << endl;
    for (int i = 0; i < n; i++) {
        cout << vlst[i].addr << " " << vlst[i].data << " "
             << vlst[i].next << endl;
    }

    int nr = n / k;
    int re = n % k;

    cout << endl;

    for (int i = 0; i < nr; i++ ) {
        for (int j = 0; j < k; j++) {
            if (i * k + k - j != n) {
                cout << vlst[i * k + k - 1 - j].addr << " "
                     << vlst[i * k + k - 1 - j].data << " "
                     << vlst[i * k + k - 2 - j].addr << endl;
            } else {
                cout << vlst[i * k + k - 1 - j].addr << " "
                     << vlst[i * k + k - 1 - j].data << " "
                     << -1 << endl;
            }
       }
    }
    for (int i = 0; i < re; i++) {
        cout << vlst[i + nr * k].addr << " "
             << vlst[i + nr * k].data << " "
             << vlst[i + nr * k].next << endl;
    }

    return 0;
}
