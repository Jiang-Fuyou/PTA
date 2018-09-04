#include <iostream>
#include <string>
#include <map>
using namespace std;

const int N = 10;

int main(int argc, char const* argv[])
{
    int n, p = 0, t = 0;
    string str[N];

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> str[i];
    }

    for (int i = 0; i < n; i++) {
        map<char, int> m;
        for (int j = 0; j < str[i].length(); j++) {
            m[str[i][j]]++;
            if (str[i][j] == 'P') {
                p = j;
            }
            if (str[i][j] == 'T') {
                t = j;
            }
        }

        if(m['P'] == 1 && m['A'] != 0 && m['T'] == 1 && m.size() == 3
                && p * (t - p - 1) == str[i].length() - t - 1)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
