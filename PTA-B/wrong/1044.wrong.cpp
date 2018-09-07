#include <iostream>
#include <string>
#include <sstream>
using namespace std;

const int N = 100;

int main(int argc, char const* argv[])
{
    int n;
    string stmp;
    string num[N];
    stringstream ss;

    const string low[13] = {
        "tret",
        "jan", "feb", "mar", "apr", "may", "jun",
        "jly", "aug", "sep", "oct", "nov", "dec"
    };
    const string cap[12] = {
        "tam", "hel", "maa", "huh", "tou", "kes",
        "hei", "elo", "syy", "lok", "mer", "jou"
    };

    getline(cin, stmp);
    ss << stmp;
    ss >> n;
    ss.clear();

    for (int i = 0; i < n; i++) {
        getline(cin, num[i]);
    }

    for (int i = 0; i < n; i++) {
        if (num[i][0] - '0' >= 1 && num[i][0] - '0' <= 9) {
            int tmp, ihi, ilo;
            ss << num[i];
            ss >> tmp;
            ss.clear();
            ss.str("");
            ihi = tmp / 13;
            ilo = tmp % 13;

            if (ihi == 0) {
                cout << low[ilo] << endl;
            } else {
                cout << cap[ihi - 1] << " " << low[ilo] << endl;
            }
        } else {
            string first, second;
            if (num[i].length() > 5) {
                int result = 0;
                ss << num[i];
                ss >> first >> second;
                ss.clear();
                ss.str("");
                for (int j = 0; j < 12; j++) {
                    if (first == cap[j]) {
                        result += (j + 1) * 13;
                        break;
                    }
                }
                for (int j = 0; j < 13; j++) {
                    if (second == low[j]) {
                        result += j;
                        break;
                    }
                }
                cout << result << endl;
            } else {
                for (int j = 0; j < 13; j++) {
                    if (num[i] == low[j]) {
                        cout << j << endl;
                        break;
                    }
                }
                for (int j = 0; j < 12; j++) {
                    if (num[i] == cap[j]) {
                        cout << (j + 1) * 13 << endl;
                        break;
                    }
                }
            }
        }
    }

    return 0;
}
