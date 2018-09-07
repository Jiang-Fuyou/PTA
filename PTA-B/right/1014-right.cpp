#include <cstdio>
#include <string>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    string s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;
    const string week[7] = {
        "MON ", "TUE ", "WED ", "THU ", "FRI ", "SAT ", "SUN "
    };

    int w, h;

    int mark = 0;
    for (int i = 0; i < s1.length() && i < s2.length(); i++) {
        if (s1[i] == s2[i] && (s1[i] >= 'A' && s1[i] <= 'G')) {
            w = s1[i] - 'A';
            mark = i + 1;
            break;
        }
    }

    // P.S. Available when s1[i] and s2[i] are digits and s1[i] == s2[i]
    for (int i = mark; i < s1.length() && i < s2.length(); i++) {
        if (s1[i] == s2[i] && (s1[i] >= 'A' && s1[i] <= 'N')) {
            h = s1[i] - 'A' + 10;
            break;
        }
        if (s1[i] == s2[i] && isdigit(s1[i])) {
            h = s1[i] - '0';
            break;
        }
    }

    int pos = 0;
    for (int i = 0; i < s3.length() && i < s4.length(); i++) {
        if (s3[i] == s4[i] && isalpha(s3[i])) {
            pos = i;
            break;
        }
    }

    cout << week[w];
    printf("%02d:%02d\n", h, pos);

    return 0;
}
