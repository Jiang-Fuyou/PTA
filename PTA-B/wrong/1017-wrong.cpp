#include <iostream>
#include <string>
using namespace std;

const int N = 1000;

int main(int argc, char *argv[])
{
    int a[N], b;
    string tmp;

    cin >> tmp >> b;

    for (int i = 0; i < tmp.length(); i++) {
        a[i] = tmp[i] - '0';
    }

    if (a[0] / b != 0) {
        cout << a[0] / b;
    }

    int rest = (a[0] % b) * 10;
    for (int i = 1; i < tmp.length(); i++) {
        a[i] += rest;
        cout << a[i] / b;
        rest = a[i] % b;
        if (i != tmp.length() - 1) {
            rest *= 10;
        } else {
            cout << " " << rest << endl;
        }
    }

    return 0;
}
