#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

int main(int argc, char const* argv[])
{
    int n, r;
    bool is_pa = false;
    string str1, str2;
    stringstream ss;

    cin >> n;

    for (int i = 0; i < 10; i++) {
        ss << n;
        ss >> str1;
        ss.clear();

        str2.erase(str2.begin(), str2.end());
        for (int j = str1.length() - 1; j >= 0; j--) {
            str2.push_back(str1[j]);
        }

        if (str1 == str2) {
            cout << str1 << " is a palindromic number." << endl;
            is_pa = true;
            break;
        } else {
            ss << str2;
            ss >> r;
            ss.clear();
            cout << n << " + " << r << " = " << n + r << endl;
            n += r;
        }
    }

    if (!is_pa) {
        cout << "Not found in 10 iterations." << endl;
    }

    return 0;
}
