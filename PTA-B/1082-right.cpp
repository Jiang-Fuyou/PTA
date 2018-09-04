#include <cmath>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char const* argv[])
{
    int n, x, y, dist;
    string str;

    cin >> n;

    int min = 200, max = 0;
    string minid, maxid;
    for (int i = 0; i < n; i++) {
        cin >> str >> x >> y;
        dist = abs(x) + abs(y);
        if (min > dist) {
            min = dist;
            minid = str;
        }
        if (max < dist) {
            max = dist;
            maxid = str;
        }
    }

    cout << minid << " " << maxid << endl;

    return 0;
}
