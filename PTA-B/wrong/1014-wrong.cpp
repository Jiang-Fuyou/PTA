#include <string>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    string s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;

    int w, h, count = 0;

    for (int i = 0; i < s1.length(); i++) {
        if (s1[i] == s2[i] && isupper(s1[i])) {
            if (count == 0) {
                w = s1[i] - 'A' + 1;
                count++;
            }
            if (count == 1) {
                h = s1[i] - 'A' + 10;
            }
        }
    }

    count = 0;
    for (int i = 0; i < s3.length(); i++) {
        if (s3[i] == s4[i] &&
                (s3[i] >= 'a' && s3[i] <= 'z' || s3[i] >= 'A' && s3[i] <= 'Z')) {
            break;
        }
        count++;
    }

    switch (w) {
        case 1:
            cout << "MON";
            break;
        case 2:
            cout << "TUE";
            break;
        case 3:
            cout << "WED";
            break;
        case 4:
            cout << "THU";
            break;
        case 5:
            cout << "FRI";
            break;
        case 6:
            cout << "SAT";
            break;
        case 7:
            cout << "SUN";
            break;
        default:
            break;
    }

    cout << " ";
    cout.fill('0');
    cout.width(2);
    cout << h << ":";
    cout.fill('0');
    cout.width(2);
    cout << count << endl;

    return 0;
}
