/*
 * 1. 读入密码以及尝试次数
 * 2. 这里不要求对密码的合理性
 * 3. 对各种情况分别讨论即可
 */

#include <iostream>
using namespace std;

int main() {
    string password, temp;
    int n, cnt = 0;
    cin >> password >> n;
    getchar(); // getchar() 用来接收回车符
    while(1) {
        getline(cin, temp);
        if (temp == "#") break;
        cnt++;
        if (cnt <= n && temp == password) {
            cout << "Welcome in";
            break;
        } else if (cnt <= n && temp != password) {
            cout << "Wrong password: " << temp << endl;
            if (cnt == n) {
                cout << "Account locked";
                break;
            }
        }
    }
    return 0;
}
