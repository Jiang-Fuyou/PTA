#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, ans = 0;
    scanf("%d", &n);
    vector<int> v(n);
    for(int i = 0; i < n; i++) scanf("%d", &v[i]);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i != j) ans += v[i] * 10 + v[j];
        }
    }
    printf("%d", ans);
    return 0;
}
