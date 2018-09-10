/**
 * @file    1076-again.cpp
 * @brief
 * @authro  Jiang Yong [chiangyung@aliyun.com]
 * @version
 * @date    Fri Sep  7 14:53:48 2018
 ******************************************************************************/

#include <iostream>
#include <string>
using namespace std;

const int N = 100;

int main(int argc, char const* argv[])
{
    int n;
    string str[N];

    cin >> n;
    getchar();
    for (int i = 0; i < n; i++) {
        getline(cin, str[i]);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < str[i].length(); j++) {
            if (str[i][j] == 'T') {
                cout << str[i][j - 2] - 'A' + 1;
            }
        }
    }
    cout << endl;

    return 0;
}
