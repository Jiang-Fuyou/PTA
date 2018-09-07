/*
 * 1. 节点地址看起来是五个字符，实际上还是一个整型变量，因此用整型变量来存储。
 * 2. 读入链表首地址，链表节点个数以及反转节点个数。
 * 3. 建立data数组以及next数组，元素数量为最大节点数量，实际上利用了邻接表的方式
 * 来实现链表。
 * 4. 依次读取地址，该地址下的data，该地址的next指针指向的地址。
 * 5. 找出有用的链表元素，使用next依次索引，实际上是得到了list数组。
 * 6. list对应各个节点的地址，对list按k反转。
 * 7. 依次输出list[i]的地址，list[i]对应的数据，list[i]的下一个地址。
 * 8. 注意结尾地址为-1
 */

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int first, k, n, temp;
    int data[100005], next[100005], list[100005];

    cin >> first >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        cin >> data[temp] >> next[temp];
    }

    int sum = 0;//不一定所有的输入的结点都是有用的，加个计数器
    while (first != -1) {
        list[sum++] = first;
        first = next[first];
    }
    for (int i = 0; i < (sum - sum % k); i += k)
        reverse(begin(list) + i, begin(list) + i + k);
    for (int i = 0; i < sum - 1; i++)
        printf("%05d %d %05d\n", list[i], data[list[i]], list[i + 1]);
    printf("%05d %d -1", list[sum - 1], data[list[sum - 1]]);
    return 0;
}
