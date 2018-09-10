/**
 * @file    1064-again.cpp
 * @brief
 * @authro  Jiang Yong [chiangyung@aliyun.com]
 * @version
 * @date    Fri Sep  7 16:18:37 2018
 ******************************************************************************/

#include <iostream>
#include <set>
using namespace std;

int main(int argc, char const* argv[])
{
    int n, tmp;
    set<int> fn;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        int sum = 0;
        while (tmp != 0) {
            sum += tmp % 10;
            tmp /= 10;
        }

        fn.insert(sum);
    }

    cout << fn.size() << endl;
    for (auto it = fn.begin(); it != fn.end(); it++) {
        if (it != fn.begin()) {
            cout << " ";
        }
        cout << *it;
    }

    return 0;
}
