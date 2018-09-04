#include <string>
#include <iostream>
#include <set>
#include <map>
using namespace std;

const int N = 50000;
const int M = 10000;

int main(int argc, char const* argv[])
{
    int n, m;
    string stmp1, stmp2;
    map<string, string> couple;
    set<string> guest;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> stmp1 >> stmp2;
        couple.insert(pair<string, string>(stmp1, stmp2));
    }
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> stmp1;
        guest.insert(stmp1);
    }

    for (map<string, string>::iterator it = couple.begin(); it != couple.end();
            ++it) {
        set<string>::iterator sit1, sit2;
        sit1 = guest.find(it->first);
        sit2 = guest.find(it->second);

        if (sit1 != guest.end() && sit2 != guest.end()) {
            guest.erase(sit1);
            guest.erase(sit2);
        }
    }

    cout << guest.size() << endl;
    unsigned int count = 0;
    for (set<string>::iterator sit = guest.begin(); sit != guest.end(); sit++) {
        cout << (*sit);
        count++;
        if (count != guest.size()) {
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}
