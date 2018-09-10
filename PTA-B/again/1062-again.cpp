/**
 * @file    1062-again.cpp
 * @brief
 * @authro  Jiang Yong [chiangyung@aliyun.com]
 * @version
 * @date    Fri Sep  7 18:49:23 2018
 ******************************************************************************/

#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main(int argc, char const* argv[])
{
    int a1, a2, b1, b2, k;
    bool flag = false;

    scanf("%d/%d %d/%d %d", &a1, &a2, &b1, &b2, &k);

    if (a1 * b2 > a2 * b1) {
        swap(a1, b1);
        swap(a2, b2);
    }

    int num = 0;
    while (a1 * k >= num * a2) {
        num++;
    }
    while (a1 * k < num * a2 && num * b2 < b1 * k) {
        if (gcd(k, num) == 1) {
            if (flag) {
                cout << " ";
            }
            cout << num << "/" << k;
            flag = true;
        }
        num++;
    }
    cout << endl;

    return 0;
}
