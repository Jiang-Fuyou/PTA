#include <iostream>
#include <algorithm>
#include <vector>
int a[100000], b[100000];
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        b[i] = a[i];
    }
    sort(a, a + n);

    int v[100000];
    int max = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if(a[i] == b[i] && b[i] > max) {
            v[cnt++] = b[i];
        }
        if (b[i] > max)
            max = b[i];
    }
    printf("%d\n", cnt);
    for(int i = 0; i < cnt; i++)
        if(i == 0)
            printf("%d", v[i]);
        else
            printf(" %d", v[i]);
    printf("\n");
    return 0;
}
