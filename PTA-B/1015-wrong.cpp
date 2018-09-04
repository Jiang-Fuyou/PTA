#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct Info {
    int id;
    int ds;
    int cs;
};

bool mycmp(const Info &i1, const Info &i2) {
    if (i1.ds + i1.cs > i2.ds + i2.cs) {
        return true;
    } else if (i1.ds + i1.cs == i2.ds + i2.cs) {
        if (i1.ds > i2.ds) {
            return true;
        } else if (i1.ds == i2.ds) {
            if (i1.id < i2.id) {
                return true;
            } else {
                return false;
            }
        } else  {
            return false;
        }
    } else {
        return false;
    }
}

int main(int argc, char const* argv[])
{
    int N, L, H;
    Info tmp;
    vector<Info> info1, info2, info3, info4;

    cin >> N >> L >> H;

    int count = N;
    for (int i = 0; i < N; i++) {
        cin >> tmp.id >> tmp.ds >> tmp.cs;
        if (tmp.ds >= H && tmp.cs >= H) {
            info1.push_back(tmp);
        } else if (tmp.ds >= H && (tmp.cs < H && tmp.cs >= L)) {
            info2.push_back(tmp);
        } else if ((tmp.ds < H && tmp.ds >= L) && (tmp.cs < H && tmp.cs >= L)
                && tmp.ds >= tmp.cs) {
            info3.push_back(tmp);
        } else if (tmp.ds >= L && tmp.cs >= L) {
            info4.push_back(tmp);
        } else {
            count--;
            continue;
        }
    }

    cout << count << endl;
    sort(info1.begin(), info1.end(), mycmp);
    for (int i = 0; i < info1.size(); i++) {
        cout << info1[i].id << " " << info1[i].ds << " " << info1[i].cs << endl;
    }
    sort(info2.begin(), info2.end(), mycmp);
    for (int i = 0; i < info2.size(); i++) {
        cout << info2[i].id << " " << info2[i].ds << " " << info2[i].cs << endl;
    }
    sort(info3.begin(), info3.end(), mycmp);
    for (int i = 0; i < info3.size(); i++) {
        cout << info3[i].id << " " << info3[i].ds << " " << info3[i].cs << endl;
    }
    sort(info4.begin(), info4.end(), mycmp);
    for (int i = 0; i < info4.size(); i++) {
        cout << info4[i].id << " " << info4[i].ds << " " << info4[i].cs << endl;
    }
    cout << endl;

    return 0;
}
