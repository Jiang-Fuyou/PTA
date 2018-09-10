/**
 * @file    1050-again.cpp
 * @brief
 * @authro  Jiang Yong [chiangyung@aliyun.com]
 * @version
 * @date    Fri Sep  7 14:30:29 2018
 ******************************************************************************/

#include <cmath>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findn(const int num) {
    int tmp = sqrt(num);
    while (tmp >= 1) {
        if (num % tmp == 0) {
            return tmp;
        }
        tmp--;
    }
}

bool cmp(const int a, const int b)
{
    return a > b;
}

int main(int argc, char const* argv[])
{
    int tmp;
    int num, m, n;
    vector<int> arr;

    cin >> num;
    for (int i = 0; i < num; i++) {
        cin >> tmp;
        arr.push_back(tmp);
    }

    sort(arr.begin(), arr.end(), cmp);
    n = findn(num);
    m = num / n;

    int t = 0;
    int level = m / 2 + m % 2;
    vector<vector<int> > brr(m, vector<int>(n));

    for (int i = 0; i < level; i++) {
        for (int j = i; j < n - i && t < num; j++) {
            brr[i][j] = arr[t++];
        }
        for (int j = i + 1; j < m - i && t < num; j++) {
            brr[j][n - 1 - i] = arr[t++];
        }
        for (int j = n - 2 - i; j >= i && t < num; j--) {
            brr[m - 1 - i][j] = arr[t++];
        }
        for (int j = m - 2 - i; j >= i + 1 && t < num; j--) {
            brr[j][i] = arr[t++];
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (j != 0) {
                cout << " ";
            }
            cout << brr[i][j];
        }
        cout << endl;
    }

    return 0;
}
