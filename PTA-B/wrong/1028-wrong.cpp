#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;

const int N = 100000;
const int DATE = 20140906;

struct record {
    int date;
    string name;
};

bool cmp(const record &r1, const record &r2) {
    return r1.date < r2.date;
}


int main(int argc, char const* argv[])
{
    int n;
    int date;
    record rtmp;
    string stmp;
    stringstream ss;
    vector<record> rv;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> rtmp.name >> stmp;
        stmp.erase(4, 1);
        stmp.erase(6, 1);
        ss << stmp;
        ss >> date;
        rtmp.date = date;
        ss.clear();
        if (date <= DATE && DATE - date <= 2000000) {
            rv.push_back(rtmp);
        }
    }

    sort(rv.begin(), rv.end(), cmp);
    cout << rv.size() << " " << rv[0].name << " " << rv[rv.size() - 1].name
         << endl;

    return 0;
}
