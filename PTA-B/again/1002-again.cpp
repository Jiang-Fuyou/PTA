/**
 * @file    1002-again.cpp
 * @brief
 * @authro  Jiang Yong [chiangyung@aliyun.com]
 * @version
 * @date    Fri Sep  7 23:41:46 2018
 ******************************************************************************/

#include <string>
#include <iostream>
#include <sstream>
using namespace std;

int main(int argc, char const* argv[])
{
    int sum = 0;
    string str, result;
    stringstream ss;
    const string num[] = {
        "ling", "yi", "er", "san", "si",
        "wu", "liu", "qi", "ba", "jiu"
    };

    cin >> str;

    for (int i = 0; i < str.length(); i++) {
        sum += str[i] - '0';
    }

    ss << sum;
    ss >> result;

    for (int i = 0; i < result.length(); i++) {
        if (i != 0) {
            cout << " ";
        }
        cout << num[result[i] - '0'];
    }
    cout << endl;


    return 0;
}
