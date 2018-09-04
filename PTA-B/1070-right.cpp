#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char const* argv[])
{
    int n, tmp;
    double sum = 0.0;
    vector<int> l;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        l.push_back(tmp);
    }

    sort(l.begin(), l.end());

    sum = l[0];
    for (unsigned int i = 1; i < l.size(); i++) {
        sum = (sum + l[i]) / 2.0;
    }

    cout << int(sum) << endl;

    return 0;
}
