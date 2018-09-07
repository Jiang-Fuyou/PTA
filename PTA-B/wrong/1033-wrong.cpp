#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(int argc, char *argv[])
{
    string broken;
    string strtmp;
    bool has_shift = true;

    cin >> broken >> strtmp;

    for (int i = 0; i < broken.length(); i++) {
        if (broken[i] == '+') {
            has_shift = false;
        }
    }

    for (int i = 0; i < strtmp.length(); i++) {
        bool is_broken = false;
        for (int j = 0; j < broken.length(); j++) {
            if (!has_shift && strtmp[i] >= 'A' && strtmp[i] <= 'Z') {
                is_broken = true;
                break;
            }
            if (tolower(strtmp[i]) == tolower(broken[j])) {
                is_broken = true;
                break;
            }
        }
        if (!is_broken) {
            cout << strtmp[i];
        }
    }
    cout << endl;

    return 0;
}
