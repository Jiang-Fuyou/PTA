#include <iostream>
using namespace std;


int main(int argc, char *argv[])
{
    int n;
    cin >> n;

    int i = n / 100;
    int j = (n - i * 100) / 10;
    int k = n - i * 100 - j * 10;

    for (int m = 0; m < i; m++) {
        cout << "B";
    }

    for (int m = 0; m < j; m++) {
        cout << "S";
    }

    for (int m = 1; m <= k; m++) {
        cout << m;
    }

    cout << endl;


    return 0;
}
