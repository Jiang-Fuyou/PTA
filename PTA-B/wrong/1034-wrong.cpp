#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const* argv[])
{
    int a1, a2, a3, a4, i;
    string s1, s2;

    cin >> s1 >> s2;

    i = 0;
    while (s1[i] != '/') i++;
    a1 = stoi(s1.substr(0, i));
    a2 = stoi(s1.substr(i + 1));

    i = 0;
    while (s2[i] != '/') i++;
    a3 = stoi(s2.substr(0, i));
    a4 = stoi(s2.substr(i + 1));

    int p1 = a1 / a2;
    int p2 = a1 % a2;
    int p3 = a3 / a4;
    int p4 = a3 % a4;
    int p5, p6;

    const string sig[4] = { " + ", " - ", " * ", " / " };

    for (int i = 0; i < 4; i++) {
        if (p1 == 0) {
            cout << a1 << "/";
        } else {
            cout << p1 << " " << a1 << "/";
        }

        if (p2 == 0)

        cout << sig[i];

        if (p3 == 0) {
            cout << p3 << "/";
        } else {
            cout << p3 << " " << p4 << "/ " << a4;
        }

        cout << " = ";

        switch (i) {
            case 0:
                cout << p1 + p3 << " " << p2 + p4;
                break;
            case 1:
                cout << p1 - p3 << " " << p2 - p4;
                break;
            case 2:
                cout << a1 * a3 << "/" << a2 * a4;
                break;
            case 3:
                cout << a1 / a3 << "/" << a2 / a4;
                break;
            default:
                break;
        }

        cout << endl;
    }

    return 0;
}
