#include <iostream>
#include <string>
using namespace std;

const int N = 6;

int main(int argc, char const* argv[])
{
    const string PATest = "PATest";
    string str;
    int a[N] = {0}, sum = 0;

    cin >> str;

    for (int i = 0; i < str.length(); i++) {
        for (int j = 0; j < PATest.length(); j++) {
            if (str[i] == PATest[j]) {
                a[j]++;
                sum++;
            }
        }
    }

    while (sum != 0) {
        for (int i = 0; i < N; i++) {
            if (a[i] != 0) {
                cout << PATest[i];
                a[i]--;
                sum--;
            }
        }
    }
    cout << endl;

    return 0;
}
