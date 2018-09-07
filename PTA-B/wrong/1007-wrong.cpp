#include <iostream>
using namespace std;

bool is_prime(const int n)
{
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }

    return true;
}

int main(int argc, char *argv[])
{
    int n, count = 0;
    cin >> n;

    for (int i = 3; i < n - 2; i += 2) {
        if (is_prime(i) && is_prime(i + 2)) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
