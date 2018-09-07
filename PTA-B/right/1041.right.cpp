#include <iostream>
#include <map>
#include <string>
using namespace std;

const int N = 1000;

int main(int argc, char const* argv[])
{
    struct group {
        string id;
        int locate;
    };

    int n, m;
    int locate[N];
    int find[N];
    group g[N];

    map<int, group> map1;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> g[i].id >> locate[i] >> g[i].locate;
        map1.insert(pair<int, group>(locate[i], g[i]));
    }
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> find[i];
    }

    for (int i = 0; i < m; i++) {
        for (map<int, group>::iterator it = map1.begin(); it != map1.end();
                ++it) {
            if (find[i] == it->first) {
                cout << (it->second).id << " " << (it->second).locate << endl;
            }
        }
    }

    return 0;
}
