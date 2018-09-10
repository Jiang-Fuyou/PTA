/**
 * @file    1072-again.cpp
 * @brief
 * @authro  Jiang Yong [chiangyung@aliyun.com]
 * @version
 * @date    Fri Sep  7 23:55:16 2018
 ******************************************************************************/

#include <string>
#include <vector>
#include <iostream>
#include <set>
using namespace std;

const int M = 6;
const int N = 1000;
const int K = 10;

int main(int argc, char const* argv[])
{
    int n, m;
    set<int> forbidden;
    string name[N];
    vector<vector<int> > object(N, vector<int>(K, -1));

    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int tmp;
        cin >> tmp;
        forbidden.insert(tmp);
    }

    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> name[i];
        cin >> tmp;
        for (int j = 0; j < tmp; j++) {
            cin >> object[i][j];
        }
    }

    int count1 = 0, count2 = 0, count3 = 0;
    for (int i = 0; i < n; i++) {
        bool take_forbidden = false;
        count3 = 0;
        for (int j = 0; j < K; j++) {
            if (forbidden.count(object[i][j]) == 1) {
                take_forbidden = true;
                count2++;
                count3++;
                if (count3 == 1) {
                    printf("%s: %04d", name[i].c_str(), object[i][j]);
                } else {
                    printf(" %04d", object[i][j]);
                }
            }
        }
        if (take_forbidden) {
            cout << endl;
            count1++;
        }
    }

    cout << count1 << " " << count2 << endl;

    return 0;
}
