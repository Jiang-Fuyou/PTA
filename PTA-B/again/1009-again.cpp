/**
 * @file    1009-again.cpp
 * @brief
 * @authro  Jiang Yong [chiangyung@aliyun.com]
 * @version
 * @date    Fri Sep  7 23:47:52 2018
 ******************************************************************************/

#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(int argc, char const* argv[])
{
    stack<string> s;
    string stmp;

    while (cin >> stmp) {
        s.push(stmp);
    }

    bool flag = false;
    while (!s.empty()) {
        if (flag) {
            cout << " ";
        }
        cout << s.top();
        s.pop();
        flag = true;
    }
    cout << endl;


    return 0;
}
