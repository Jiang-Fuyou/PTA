#include <iostream>
#include <string>
using namespace std;

const int N = 10;
const int M = 50;


int main(int argc, char *argv[])
{
    int n[N] = {0};
    int result[M] = {0};
    int sum = 0;

    for (int i = 0; i < N; i++) {
        cin >> n[i];
    }

    for (int i = 0; i < N; i++) {
        sum += n[i];
    }

    for (int i = 1; i < N; i++) {
        if (n[i] != 0) {
            result[0] = i;
            n[i]--;
            break;
        }
    }

    int m = 1;
    for (int i = 0; i < N; i++) {
        while (n[i] != 0) {
            result[m] = i;
            n[i]--;
            m++;
        }
    }

    for (int i = 0; i < sum; i++) {
        cout << result[i];
    }
    cout << endl;

    return 0;
}
