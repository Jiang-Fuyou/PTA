#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n;
    long long p;
    cin >> n >> p;
    if (n == 0) {
        cout << n;
        return 0;
    }
    vector<long long int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    int result = 1;
    for (int i = 0; i <= n - 2; i++) {
        for (int j = i + result; j <= n - 1; j++) {
            if (a[j] > a[i] * p) break;
            result = max(result, j - i + 1);
        }
    }
    cout << result;
    return 0;
}
