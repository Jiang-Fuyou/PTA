/**
 * @file    1060.cpp
 * @brief
 * @authro  Jiang Yong [chiangyung@aliyun.com]
 * @version
 * @date    Sat Sep  8 08:44:32 2018
 ******************************************************************************/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(const int a, const int b) {
    return a > b;
}

int main(int argc, char const* argv[])
{
    int n, tmp;
    vector<int> result;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        result.push_back(tmp);
    }

    sort(result.begin(), result.end(), cmp);

    int max = 0;
    for (int i = 0; i < n; i++) {
        // 注意这里必须是i + 1, i = 0 的时候是第一天，大于1公里
        if (result[i] > i + 1) {
            max++;
        }
    }
    cout << max << endl;

    return 0;
}

