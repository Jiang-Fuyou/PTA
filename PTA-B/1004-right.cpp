#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

struct Report {
    string name;
    string sno;
};
typedef struct Report Report;


int main(int argc, char *argv[])
{
    int n, score;
    Report tmp;
    map<int, Report> m;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> tmp.name >> tmp.sno >> score;
        m.insert(pair<int, Report>(score, tmp));
    }

    map<int, Report>::const_reverse_iterator it1 = m.crbegin();
    cout << (it1->second).name << " " << (it1->second).sno << endl;
    map<int, Report>::const_iterator it2 = m.cbegin();
    cout << (it2->second).name << " " << (it2->second).sno << endl;

    return 0;
}
