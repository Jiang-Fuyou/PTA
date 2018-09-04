#include <iostream>
#include <vector>
#include <string>
#include <set>
using namespace std;

const int N = 10000;

bool is_prime(const int n) {
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int main(int argc, char const* argv[])
{
    int n, m;
    string rank[N];
    string stmp;
    vector<string> search;
    set<string> get_reward;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> rank[i];
    }

    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> stmp;
        search.push_back(stmp);
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (search[i] == rank[j]) {

            }
        }
    }





    return 0;
}
