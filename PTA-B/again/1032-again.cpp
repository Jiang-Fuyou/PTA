/**
 * @file    1032-again.cpp
 * @brief
 * @authro  Jiang Yong [chiangyung@aliyun.com]
 * @version
 * @date    Fri Sep  7 15:56:38 2018
 ******************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

const int N = 100000;

int main(int argc, char const* argv[])
{
    int n, a, b;
    vector<int> school(N, 0);

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        school[a] += b;
    }

    a = 0, b = 0;
    for (int i = 0; i < N; i++) {
        if (b < school[i]) {
            a = i;
            b = school[i];
        }
    }

    cout << a << " " << b << endl;

    return 0;
}
