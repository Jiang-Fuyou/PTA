#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const* argv[])
{
    int stat[26] = {0};
    string in;
    getline(cin, in);

    for (int i = 0; i < in.length(); i++) {
        if (in[i] >= 'a' && in[i] <= 'z') {
            stat[in[i] - 'a']++;
        } else if (in[i] >= 'A' && in[i] <= 'Z') {
            stat[in[i] - 'A']++;
        } else {
            continue;
        }
    }

    int max = 0;
    for (int i = 0; i < 26; i++) {
        if (max < stat[i]) {
            max = stat[i];
        }
    }

    for (int i = 0; i < 26; i++) {
        if (max == stat[i]) {
            cout << char('a' + i) << " " << stat[i] << endl;
            break;
        }
    }

    return 0;
}
