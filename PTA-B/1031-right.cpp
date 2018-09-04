#include <iostream>
#include <string>
#include <sstream>
using namespace std;

const int N = 100;

const int weight[17] = {
    7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2
};

const char check[11] = {
    '1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'
};

int main(int argc, char *argv[])
{
    int n;
    bool passed = true;
    string id[N];

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> id[i];
    }

    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < 17; j++) {
            sum += (id[i][j] - '0') * weight[j];
        }
        int rest = sum % 11;
        if (check[rest] != id[i][17]) {
            cout << id[i] << endl;
            passed = false;
        }
    }

    if (passed) {
        cout << "All passed" << endl;
    }

    return 0;
}
