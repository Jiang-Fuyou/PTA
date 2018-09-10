/*
 * 1. 用结构体node来记录id, gp, gm, gf, g
 * 2. 用map<string, ing> 来把id映射到int
 *
 */

#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

struct node {
    string name;
    int gp, gm, gf, g;
};

bool cmp(node a, node b) {
    return a.g != b.g ? a.g > b.g : a.name < b.name;
}

map<string, int> idx;

int main() {
    int p, m, n, score, cnt = 1;

    // 读入p, m, n
    cin >> p >> m >> n;

    vector<node> v, ans;
    string s;

    // 读入p个在线编程作业分
    for (int i = 0; i < p; i++) {
        cin >> s >> score;
        // 如果在线编程成绩>=200，则最终才有成绩，因此只需要考虑这部分
        if (score >= 200) {
            v.push_back(node{s, score, -1, -1, 0});
            // 将s映射到cnt，从1开始
            idx[s] = cnt++;
        }
    }

    // 读入m个期中成绩
    for (int i = 0; i < m; i++) {
        cin >> s >> score;
        // 如果idx[s] != 0，结果才有效
        if (idx[s] != 0) v[idx[s] - 1].gm = score;
    }

    // 读入n个期末成绩
    for (int i = 0; i < n; i++) {
        cin >> s >> score;
        if (idx[s] != 0) {
            int temp = idx[s] - 1;
            // 根据期中成绩与期末成绩的规则算出期末成绩
            v[temp].gf = v[temp].g = score;
            if (v[temp].gm > v[temp].gf) v[temp].g = int(v[temp].gm * 0.4 + v[temp].gf * 0.6 + 0.5);
        }
    }

    // 从有成绩的v[]里面找出合格的成绩
    for (int i = 0; i < v.size(); i++)
        if (v[i].g >= 60) ans.push_back(v[i]);

    // 排序
    sort(ans.begin(), ans.end(), cmp);

    // 输出
    for (int i = 0; i < ans.size(); i++)
        printf("%s %d %d %d %d\n", ans[i].name.c_str(), ans[i].gp, ans[i].gm, ans[i].gf, ans[i].g);
    return 0;
}
