#include <iostream>
#include <string>
#include <set>
using namespace std;

const int MAX = 1001;

int main(int argc, char *argv[])
{
    int M, N, S;
    string name[MAX];
    set<string> nameset;
    int mark[MAX] = {0};
    cin >> M >> N >> S;

    for (int i = 0; i < M; i++) {
        cin >> name[i];
    }

    if (S > M) {
        cout << "Keep going..." << endl;
    } else {
        int count = 0;
        for (int i = 0; i < M; i++) {
            if ((count + 1 - S) % N == 0) {
                mark[i] = 1;
            }

            if (nameset.find(name[i]) == nameset.end()) {
                nameset.insert(name[i]);
                count++;
            }
        }

        for (int i = 0; i < M; i++) {
            if (mark[i] == 1) {
                cout << name[i] << endl;
            }
        }
    }

    return 0;
}
