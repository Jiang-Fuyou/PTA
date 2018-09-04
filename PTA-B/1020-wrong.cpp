#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;

const int N = 1000;
struct s{
    int i;
    double w;
};

int cmp(const void *s1, const void *s2)
{
    s *ss1 = (s*)s1;
    s *ss2 = (s*)s2;

    if (ss1->w > ss2->w) {
        return 1;
    } else {
        return -1;
    }
}

int main(int argc, char *argv[])
{
    int n, limits;
    int q[N], p[N];
    double t = 0;
    s ss[N];

    cin >> n >> limits;

    for (int i = 0; i < n; i++) cin >> q[i];
    for (int i = 0; i < n; i++) cin >> p[i];

    for (int i = 0; i < n; i++) {
        ss[i].i = i;
        ss[i].w = double(p[i]) / q[i];
    }
    qsort(ss, n, sizeof(s), cmp);

    for (int i = n - 1; i >= 0; i--) {
        if (limits > q[ss[i].i]) {
            limits -= q[ss[i].i];
            t += q[ss[i].i] * ss[i].w;
        } else {
            t += limits * ss[i].w;
            break;
        }
    }

    cout << setprecision(2) << fixed << t << endl;

    return 0;
}
