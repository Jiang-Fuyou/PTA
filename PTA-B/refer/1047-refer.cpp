/*
 * 这道题可以用scanf格式化读取输入。由于参赛队伍只有1000个，因此建立一个数组，用
 * 来记录各个参数队伍的总成绩即可。
 */
#include <iostream>
using namespace std;

int main() {
    int n, t, num, score;
    cin >> n;
    int team[1001] = {0};
    for (int i = 1; i <= n; i++) {
        scanf("%d-%d %d", &t, &num, &score);
        team[t] += score;
    }
    int max = 0;
    for (int i = 0; i < 1001; i++) {
        if (team[max] < team[i])
            max = i;
    }
    cout << max << " " << team[max];
    return 0;
}
