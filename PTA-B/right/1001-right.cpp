#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int num, count = 0;
    cin >> num;
    while (num != 1) {
        if (num % 2 == 1) {
            num = 3 * num + 1;
            num /= 2;
        } else {
            num /= 2;
        }
        count++;
    }

    cout << count << endl;

    return 0;
}
