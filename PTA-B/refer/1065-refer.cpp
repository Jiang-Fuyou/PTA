/*
 * 1. 类似邻接表的想法，为每个couple元素建立一个邻居，如果没有则赋值-1
 * 2. 读取guest编号，如果其对应的邻居不是-1则说明可能有couple
 * 3. 这里用了一个比较骚的操作，50000对couple，ID从0到99999，共100000个，如果其
 *      存在couple则对应的值即为couple的ID。
 * 4. 用isExist数组来存放某ID是否存在couple，读入guest的ID，只能说明这个guest对
 *      应的couple是存在couple的。
 * 5. 对guest进行遍历，如果guest对应的ID没有couple，则放入set中
 * 6. 依次输出set元素
 */

#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    int n, a, b, m;
    scanf("%d", &n);
    vector<int> couple(100000, -1);
    for (int i = 0; i < n; i++) {
        scanf("%d%d", &a, &b);
        couple[a] = b;
        couple[b] = a;
    }
    scanf("%d", &m);
    vector<int> guest(m), isExist(100000);
    for (int i = 0; i < m; i++) {
        scanf("%d", &guest[i]);
        if (couple[guest[i]] != -1)
            isExist[couple[guest[i]]] = 1;
    }
    set<int> s;
    for (int i = 0; i < m; i++) {
        if (!isExist[guest[i]])
            s.insert(guest[i]);
    }
    printf("%d\n", s.size());
    for (auto it = s.begin(); it != s.end(); it++) {
        if (it != s.begin()) printf(" ");
        printf("%05d", *it);
    }
    return 0;
}
