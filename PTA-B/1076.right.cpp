#include <iostream>
#include <string>
using namespace std;

const int N = 100;

int main(int argc, char *argv[])
{
    int n;
    string input[N][4];

    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> input[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 4; j++) {
            if (input[i][j][2] == 'T') {
                cout << input[i][j][0] - 'A' + 1;
            }
        }
    }
    cout << endl;

    return 0;
}
