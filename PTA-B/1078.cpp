#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
    string mark;
    string stmp;
    int count = 0;

    getline(cin, mark);
    getline(cin, stmp);

    if (mark[0] == 'C') {
        for (int i = 0; i < stmp.length(); i += count) {
            count = 1;
            for (int j = i + 1; j < stmp.length(); j++) {
                if (stmp[j] == stmp[i]) {
                    count++;
                } else {
                    break;
                }
            }
            if (count == 1) {
                cout << stmp[i];
            } else {
                cout << count << stmp[i];
            }
        }
        cout << endl;
    } else if (mark[0] == 'D') {
        count = 1;
        for (int i = 0; i < stmp.length(); i++) {
            for (int j = i; j < stmp.length(); j++) {
                if (stmp[i] >= '0'&& stmp[i] <= '9') {

                } else {
                    cout << stmp[i];
                }
            }
        }
        cout << endl;

    } else {

    }




    return 0;
}
