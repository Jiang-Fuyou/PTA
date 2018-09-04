#include <iostream>
#include <string>
#include <set>
#include <cctype>
using namespace std;

const int N = 100000;

int main(int argc, char *argv[])
{
    int n;
    string id[N];
    string school[N];
    int score[N];
    set<string> schoolset;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> id[i] >> score[i] >> school[i];

        for (int j = 0; j < school[i].length(); j++) {
            school[i][j] = tolower(school[i][j]);
        }
        schoolset.insert(school[i]);
    }

    int nschool = schoolset.size();
    double schoolscore[nschool];
    int schoolperson[nschool];

    for (set<string>::iterator it = schoolset.begin(); it != schoolset.end();
            ++it) {
        for (int i = 0; i < n; i++) {
            if ((*it) == school[i]) {
                switch (id[i][0]) {
                    case 'A':


                        break;
                }


            }
        }
    }

    return 0;
}
