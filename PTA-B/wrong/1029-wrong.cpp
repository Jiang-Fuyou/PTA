#include <iostream>
#include <string>
#include <set>
#include <algorithm>
using namespace std;

int main(int argc, char const* argv[])
{
    string str1, str2;
    set<char> broken;
    set<char> output;

    cin >> str1 >> str2;
    transform(str1.begin(), str1.end(), str1.begin(), ::toupper);
    transform(str2.begin(), str2.end(), str2.begin(), ::toupper);

    for (int i = 0; i < str2.length(); i++) {
        broken.insert(str2[i]);
    }

    for (int i = 0; i < str1.length(); i++) {
        if (broken.count(str1[i]) == 0 && output.count(str1[i]) == 0) {
            output.insert(str1[i]);
            if (isalpha(str1[i])) {
                cout << str1[i];
            } else {
                cout << str1[i];
            }
        }
    }
    cout << endl;

    return 0;
}
