/**
 * @file    1078-again.cpp
 * @brief
 * @authro  Jiang Yong [chiangyung@aliyun.com]
 * @version
 * @date    Fri Sep  7 16:48:08 2018
 ******************************************************************************/

#include <string>
#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
    char mark;
    string line;

    cin >> mark;
    getchar();
    getline(cin, line);

    if (mark == 'D') {
        string num;
        int count;

        for (int i = 0; i < line.length(); i++) {
            if (isdigit(line[i])) {
                num += line[i];
            } else {
                if (num.length() > 0) {
                    count = stoi(num);
                }
                while (count--) {
                    cout << line[i];
                }
                num = "";
                count = 1;
            }
        }
    } else if (line.length() > 0) {
        char head = line[0];
        int count = 1;

        for (int i = 1; i < line.length(); i++) {
            if (line[i] == head) {
                count++;
            } else {
                if (count > 1) {
                    cout << count;
                }
                cout << head;
                count = 1;
                head = line[i];
            }
        }
        //注意，之前head = line[line.length() - 1]之后并不会输出，所以需要最后一
        //步的输出
        if (count > 1) {
            cout << count;
        }
        cout << head;
    }

    return 0;
}
