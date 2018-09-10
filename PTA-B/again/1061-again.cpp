/**
 * @file    1061-again.cpp
 * @brief
 * @authro  Jiang Yong [chiangyung@aliyun.com]
 * @version
 * @date    Fri Sep  7 16:06:57 2018
 ******************************************************************************/

#include <vector>
#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
    int n, m, tmp;
    cin >> n >> m;

    vector<int> score(m);
    vector<int> right(m);
    for (int i = 0; i < m; i++) {
        cin >> score[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> right[i];
    }

    vector<int> result(n, 0);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> tmp;
            if (tmp == right[j]) {
                result[i] += score[j];
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << result[i] << endl;
    }

    return 0;
}
