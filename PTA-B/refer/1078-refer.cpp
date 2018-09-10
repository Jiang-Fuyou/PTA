/*
 * 1. 首先读取是压缩还是解压
 * 2. 然后读取一行字符串
 * 3. 如果是解压，连续读字符，如果是数字就结合到一起，如果是字符并且数字存在，则
 *      输出数字个字符
 * 4. 如果是压缩，则用一个字符来接收当前位置的字符，扫描后续字符，如果后续相同，
 *      则计数，最后输出。
 */

#include <iostream>
using namespace std;

int main() {
    char t;
    cin >> t;
    getchar();
    string s, num;
    getline(cin, s);

    int cnt = 1;

    if (t == 'D') {
        for (int i = 0; i < s.length(); i++) {
            if (s[i] >= '0' && s[i] <= '9') {
                num += s[i];
            } else {
                if (num.length() > 0) cnt = stoi(num);
                while(cnt--) cout << s[i];
                cnt = 1;
                num = "";
            }
        }
    } else if (s.length() != 0) {
        char pre = s[0];
        for (int i = 1; i < s.length(); i++) {
            if (s[i] == pre) {
                cnt++;
            } else {
                if (cnt >= 2) cout << cnt;
                cout << pre;
                cnt = 1;
                pre = s[i];
            }
        }
        if (cnt >= 2) cout << cnt;
        cout << pre;
    }
    return 0;
}
