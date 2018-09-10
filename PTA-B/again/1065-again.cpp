/**
 * @file    1065-again.cpp
 * @brief
 * @authro  Jiang Yong [chiangyung@aliyun.com]
 * @version
 * @date    Fri Sep  7 15:17:33 2018
 ******************************************************************************/

#include <vector>
#include <iostream>
#include <set>
using namespace std;

const int N = 100000;

int main(int argc, char const* argv[])
{
    int m, n;
    int a, b;
    vector<int> couple(N, -1);

    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        couple[a] = b;
        couple[b] = a;
    }

    cin >> n;
    vector<int> guest(n);
    vector<int> isExist(N, 0);
    for (int i = 0; i < n; i++) {
        cin >> guest[i];
        // 这里比较重要，需要对是否存在couple进行判定
        if (couple[guest[i]] != -1)
            isExist[couple[guest[i]]] = 1;
    }

    set<int> single;
    for (int i = 0; i < n; i++) {
        if (!isExist[guest[i]]) {
            single.insert(guest[i]);
        }
    }

    printf("%d\n", single.size());
    for (auto it = single.begin(); it != single.end(); ++it) {
        if (it != single.begin()) {
            printf(" ");
        }
        printf("%05d", *it);
    }

    return 0;
}
