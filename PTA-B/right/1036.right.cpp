#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int n, nx, ny;
    char c;

    cin >> n >> c;

    nx = n;
    ny = (n + 1) / 2;

    for (int i = 0; i < nx; i++) {
        cout << c;
    }
    cout << endl;
    for (int j = 1; j < ny - 1; j++) {
        cout << c;
        for (int i = 1; i < nx -1; i++) {
            cout << " ";
        }
        cout << c;
        cout << endl;
    }
    for (int i = 0; i < nx; i++) {
        cout << c;
    }
    cout << endl;

    return 0;
}

