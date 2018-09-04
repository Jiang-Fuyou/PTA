#include <iostream>
#include <string>
using namespace std;

const int N = 62;

int main(int argc, char const* argv[])
{
    string s1, s2;
    bool buy = true;
    int n1[N] = {0}, n2[N] = {0};
    int c1 = 0, c2 = 0, less = 0;

    cin >> s1 >> s2;

    for (int i = 0; i < s1.length(); i++) {
        if (s1[i] >= '0' && s1[i] <= '9') {
            n1[s1[i] - '0']++;
        }
        if (s1[i] >= 'a' && s1[i] <= 'z') {
            n1[s1[i] - 'a' + 10]++;
        }
        if (s1[i] >= 'A' && s1[i] <= 'Z') {
            n1[s1[i] - 'A' + 36]++;
        }
    }

    for (int i = 0; i < s2.length(); i++) {
        if (s2[i] >= '0' && s2[i] <= '9') {
            n2[s2[i] - '0']++;
        }
        if (s2[i] >= 'a' && s2[i] <= 'z') {
            n2[s2[i] - 'a' + 10]++;
        }
        if (s2[i] >= 'A' && s2[i] <= 'Z') {
            n2[s2[i] - 'A' + 36]++;
        }
    }

    for (int i = 0; i < N; i++) {
        c1 += n1[i];
        c2 += n2[i];
        if (n2[i] > n1[i]) {
            buy = false;
            less += n2[i] - n1[i];
        }
    }

    if (buy) {
        cout << "Yes " << c1 - c2 << endl;
    } else {
        cout << "No " << less << endl;
    }


    return 0;
}
