#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int n;
    char a, b;
    int aint, bint;
    int awcjb[3] = {0}, bwcjb[3] = {0};
    int aw = 0, bw = 0, cp = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        switch (a) {
            case 'C':
                aint = 0;
                break;
            case 'J':
                aint = 1;
                break;
            case 'B':
                aint = 2;
                break;
            default:
                break;
        }
        switch (b) {
            case 'C':
                bint = 0;
                break;
            case 'J':
                bint = 1;
                break;
            case 'B':
                bint = 2;
                break;
            default:
                break;
        }

        if (aint == bint) {
            cp++;
        }
        if (aint - bint == -1 || aint - bint == 2) {
            awcjb[aint]++;
        }
        if (bint - aint == -1 || bint - aint == 2) {
            bwcjb[bint]++;
        }
    }

    for (int i = 0; i < 3; i++) {
        aw += awcjb[i];
        bw += bwcjb[i];
    }

    cout << aw << " " << cp << " " << bw << endl;
    cout << bw << " " << cp << " " << aw << endl;

    if (awcjb[2] >= awcjb[1] && awcjb[2] >= awcjb[0]) cout << 'B';
    else if (awcjb[0] >= awcjb[1] && awcjb[0] >= awcjb[2]) cout << 'C';
    else if (awcjb[1] >= awcjb[0] && awcjb[1] >= awcjb[2]) cout << 'J';
    else;
    cout << " ";
    if (bwcjb[2] >= bwcjb[1] && bwcjb[2] >= bwcjb[0]) cout << 'B';
    else if (bwcjb[0] >= bwcjb[1] && bwcjb[0] >= bwcjb[2]) cout << 'C';
    else if (bwcjb[1] >= bwcjb[0] && bwcjb[1] >= bwcjb[2]) cout << 'J';
    else;
    cout << endl;

    return 0;
}
