/*
 * 1. 读入N
 * 2. 根据读入的N，算出矩阵的m和n，其中n比m小，并且N恰好可以整除n
 * 3. 对读入的数组进行排序，通过sort排序
 * 4. 螺旋输出一直没仔细看，这里是定义了一个二维数组来记录，之后输出即可
 *      4.1 外层循环是行数/2向上取整的数量
 *      4.2 对于每一个外层循环，相当于转了一个螺旋
 *      4.3 用t来计数
 */

#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int func(int N) {
    int i = sqrt((double)N);
    while(i >= 1) {
        if(N % i == 0)
            return i;
        i--;
    }
    return 1;
}

int cmp(int a, int b) {return a > b;}

int main() {
    int N, m, n, t = 0;
    scanf("%d", &N);
    n = func(N);
    m = N / n;
    vector<int> a(N);
    for (int i = 0; i < N; i++)
        scanf("%d", &a[i]);
    sort(a.begin(), a.end(), cmp);

    vector<vector<int> > b(m, vector<int>(n));
    int level = m / 2 + m % 2;
    for (int i = 0; i < level; i++) {
        for (int j = i; j <= n - 1 - i && t <= N - 1; j++) {
            b[i][j] = a[t++];
        }
        for (int j = i + 1; j <= m - 2 - i && t <= N - 1; j++) {
            b[j][n - 1 - i] = a[t++];
        }
        for (int j = n - i - 1; j >= i && t <= N - 1; j--) {
            b[m - 1 - i][j] = a[t++];
        }
        for (int j = m - 2 - i; j >= i + 1 && t <= N - 1; j--) {
            b[j][i] = a[t++];
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0 ; j < n; j++) {
            printf("%d", b[i][j]);
            if (j != n - 1) printf(" ");
        }
        printf("\n");
    }
    return 0;
}
