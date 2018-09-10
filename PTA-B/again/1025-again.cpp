/**
 * @file    1025-again.cpp
 * @brief
 * @authro  Jiang Yong [chiangyung@aliyun.com]
 * @version
 * @date    Sat Sep  8 09:04:21 2018
 ******************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

const int N = 100000;

int main(int argc, char const* argv[])
{
    int data[N] = {0}, next[N] = {0}, list[N] = {0};
    int head, n, k;

    cin >> head >> n >> k;

    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        cin >> data[tmp];
        cin >> next[tmp];
    }

    int sum = 0;
    while (head != -1) {
        list[sum++] = head;
        head = next[head];
    }

    for (int i = 0; i < sum / k; i++) {
        reverse(begin(list) + i * k, begin(list) + i * k + k);
    }

    for (int i = 0; i < sum - 1; i++) {
        printf("%05d %d %05d\n", list[i], data[list[i]], list[i + 1]);
    }
    printf("%05d %d -1\n", list[sum - 1], data[list[sum - 1]]);


    return 0;
}
