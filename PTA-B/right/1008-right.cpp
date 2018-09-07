#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int n, m;
    cin >> n >> m;

    int a[n];
    for (int i = m % n; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m % n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n - 1; i++) {
        cout << a[i] << " ";
    }
    cout << a[n - 1] << endl;

    return 0;
}
