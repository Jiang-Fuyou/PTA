#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char const* argv[])
{
    int sum = 0;
    string str;
    vector<int> avec;

    cin >> str;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 'A') {
            avec.push_back(i);
        }
    }

    for (int j = 0; j < avec.size(); j++) {
        int p = 0, t = 0;
        for (int il = 0; il < avec[j]; il++) {
            if (str[il] == 'P') {
                p++;
            }
        }
        for (int ir = avec[j]; ir < str.length(); ir++) {
            if (str[ir] == 'T') {
                t++;
            }
        }
        sum += p * t;
        sum %= 1000000007;
    }

    cout << sum << endl;

    return 0;
}
