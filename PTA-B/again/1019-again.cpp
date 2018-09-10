#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char *argv[])
{
    int a[4];
    int n, n1, n2;
    cin >> n;

    // 求出四位数字
    a[0] = (n / 1000);
    a[1] = (n % 1000) / 100;
    a[2] = (n % 100 ) /  10;
    a[3] = (n % 10  );

    // 如果四位数字相等
    if (a[0] == a[1] && a[0] == a[2] && a[0] == a[3]) {
        cout.fill('0');
        cout.width(4);
        cout << n;
        cout << " - ";
        cout.fill('0');
        cout.width(4);
        cout << n;
        cout << " = ";
        cout.fill('0');
        cout.width(4);
        cout << 0 << endl;
    } else {
        // 否则
        do {
            a[0] = (n / 1000);
            a[1] = (n % 1000) / 100;
            a[2] = (n % 100 ) /  10;
            a[3] = (n % 10  );

            sort(a, a + 4);
            n1 = a[3] * 1000 + a[2] * 100 + a[1] * 10 + a[0];
            n2 = a[0] * 1000 + a[1] * 100 + a[2] * 10 + a[3];
            n = n1 - n2;

            cout.fill('0');
            cout.width(4);
            cout << n1;
            cout << " - ";
            cout.fill('0');
            cout.width(4);
            cout << n2;
            cout << " = ";
            cout.fill('0');
            cout.width(4);
            cout << n << endl;
        } while (n != 6174);
    }

    return 0;
}
