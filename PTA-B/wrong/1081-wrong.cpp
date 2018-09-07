#include <iostream>
#include <string>
using namespace std;

const int N = 100;

int main(int argc, char const* argv[])
{
    int n;
    bool digit, alpha;
    string str[N];

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> str[i];
    }

    for (int i = 0; i < n; i++) {
        if (str[i].length() < 6) {
            cout << "Your password is tai duan le." << endl;
        } else {
            digit = false;
            alpha = false;
            for (int j = 0; j < str[i].length(); j++) {
                if (isdigit(str[i][j]) || isalpha(str[i][j])
                        || str[i][j] == '.') {
                    if (isdigit(str[i][j])) {
                        digit = true;
                    }
                    if (isalpha(str[i][j])) {
                        alpha = true;
                    }
                } else {
                    digit = false;
                    alpha = false;
                    break;
                }
            }

            if (!alpha && !digit) {
                cout << "Your password is tai luan le." << endl;
            } else if (digit && !alpha) {
                cout << "Your password needs zi mu." << endl;
            } else if (!digit && alpha) {
                cout << "Your password needs shu zi." << endl;
            } else {
                cout << "Your password is wan mei." << endl;
            }
        }
    }

    return 0;
}
