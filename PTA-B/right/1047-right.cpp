#include <iostream>
#include <string>
#include <sstream>
using namespace std;

const int N = 10000;

int main(int argc, char const* argv[])
{
    int n, mark, tmp, score;
    string str, id;
    stringstream ss;
    int stat[N] = {0};

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> str >> score;
        for (int i = 0; i < str.length(); i++) {
            if (str[i] == '-') {
                mark = i;
                break;
            }
        }
        id = str.substr(0, mark);
        ss << id;
        ss >> tmp;
        ss.clear();
        stat[tmp] += score;
    }

    int maxscore = 0, index;
    for (int i = 0; i < N; i++) {
        if (maxscore < stat[i]) {
            maxscore = stat[i];
            index = i;
        }
    }

    cout << index << " " << maxscore << endl;

    return 0;
}
