#include <iostream>
#include <string>
using namespace std;

const int M = 10;

int main(int argc, char *argv[])
{
    int s[M] = {0};
    string str;

    cin >> str;
    for (int i = 0; i < str.length(); i++) {
        s[str[i] - '0']++;
    }

    for (int i = 0; i < M; i++) {
        if (s[i] != 0) {
            cout << i << ":" << s[i] << endl;
        }
    }

    return 0;
}
