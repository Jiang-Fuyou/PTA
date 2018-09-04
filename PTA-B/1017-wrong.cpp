#include <iostream>
#include <string>
using namespace std;

const int N = 1000;

int main(int argc, char *argv[])
{
    int a[N], b;
    int q[N], r;
    string tmp;
    cin >> tmp >> b;

    for (int i = 0; i < tmp.length(); i++) {
        a[i] = tmp[i] - '0';
    }

    int rest = 0;
    for (int i = 0; i < tmp.length(); i++) {
        a[i] += rest;
        if (i == 0 && a[i] / b == 0) {

        } else {
            cout << a[i] / b;
        }
        rest = a[i] % b;
        if (i != tmp.length() - 1) {
            rest *= 10;
        } else {
            cout << " " << rest << endl;
        }
    }

    return 0;
}
