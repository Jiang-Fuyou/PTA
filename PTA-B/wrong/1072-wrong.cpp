#include <iostream>
#include <string>
#include <set>
#include <vector>
using namespace std;

const int N = 1000;
const int K = 10;

int main(int argc, char const* argv[])
{
    int n, m;
    string stmp;
    set<string> forbidden;
    string name[N];
    string object[N][K];

    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> stmp;
        forbidden.insert(stmp);
    }

    for (int i = 0; i < n; i++) {
        cin >> name[i];
        cin >> m;
        for (int j = 0; j < m; j++) {
            cin >> object[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        bool has_forbidden = false;
        for (int j = 0; j < K; j++) {
            if () {

            }
        }

        if (has_forbidden) {
            cout << name[i] << ": ";
        }
    }




    return 0;
}
