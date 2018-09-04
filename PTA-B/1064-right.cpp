#include <iostream>
#include <vector>
#include <string>
#include <set>
using namespace std;

int main(int argc, char const* argv[])
{
    int n;
    string tmp;
    vector<string> vs;
    set<int> id;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        vs.push_back(tmp);
    }

    for (int i = 0; i < vs.size(); i++) {
        int sum = 0;
        for (int j = 0; j < vs[i].length(); j++) {
            sum += vs[i][j] - '0';
        }
        id.insert(sum);
    }

    cout << id.size() << endl;
    for (set<int>::iterator it = id.begin(); it != id.end(); ++it) {
        if (it != id.begin()) {
            cout << " ";
        }
        cout << *it;
    }
    cout << endl;

    return 0;
}
