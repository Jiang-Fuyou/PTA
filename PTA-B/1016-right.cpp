#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
    string A, B;
    char DA, DB;
    int PA = 0, PB = 0;

    cin >> A >> DA >> B >> DB;

    int sa = 0;
    for (int i = 0; i < A.length(); i++) {
        if (A[i] == DA) {
            sa++;
        }
    }

    int sb = 0;
    for (int i = 0; i < B.length(); i++) {
        if (B[i] == DB) {
            sb++;
        }
    }

    for (int i = 0; i < sa; i++) {
        int PATMP = 1;
        for (int j = i + 1; j < sa; j++) {
            PATMP *= 10;
        }
        PA += PATMP * (DA - '0');
    }

    for (int i = 0; i < sb; i++) {
        int PBTMP = 1;
        for (int j = i + 1; j < sb; j++) {
            PBTMP *= 10;
        }
        PB += PBTMP * (DB - '0');
    }

    cout << PA + PB << endl;

    return 0;
}
