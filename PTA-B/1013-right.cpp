#include <iostream>
#include <math.h>
using namespace std;

const int INTMAX = pow(2, 30);

bool is_prime(const int n)
{
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int main(int argc, char *argv[])
{
    int m, n;
    int count1 = 0, count2 = 0;

    cin >> m >> n;
    for (int i = 2; i < INTMAX; i++) {
        if (is_prime(i)) {
            count1++;
            if (count1 >= m && count1 <= n) {
                cout << i;
                count2++;
                if (count1 == n) {
                    cout << endl;
                    break;
                }
                if (count2 % 10 == 0) {
                    cout << endl;
                } else {
                    cout << " ";
                }
            }
        }
    }

    return 0;
}
