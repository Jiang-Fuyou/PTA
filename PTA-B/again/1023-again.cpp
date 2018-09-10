/**
 * @file    1023-again.cpp
 * @brief
 * @authro  Jiang Yong [chiangyung@aliyun.com]
 * @version
 * @date    Fri Sep  7 16:35:51 2018
 ******************************************************************************/

#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
    int a[10] = {0};

    for (int i = 0; i < 10; i++) {
        cin >> a[i];
    }

    for (int i = 1; i < 10; i++) {
        if (a[i] != 0) {
            cout << i;
            a[i]--;
            break;
        }
    }

    for (int i = 0; i < 10; i++) {
        while (a[i] != 0) {
            cout << i;
            a[i]--;
        }
    }

    cout << endl;

    return 0;
}
