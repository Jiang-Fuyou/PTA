#include <iostream>
#include <vector>
using namespace std;

const int N = 100000;

int main(int argc, char *argv[])
{
    int n;
    bool is_main_element = true;
    int a[N];
    vector<int> result;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        is_main_element = true;

        for (int jl = 0; jl < i; jl++) {
            if (a[jl] > a[i]) {
                is_main_element = false;
                break;
            }
        }

        for (int jr = i + 1; jr < n; jr++) {
            if (a[jr] < a[i]) {
                is_main_element = false;
                break;
            }
        }

        if (is_main_element) {
            result.push_back(a[i]);
        }
    }

    cout << result.size() << endl;
    for (int i = 0; i < result.size(); i++) {
        cout << result[i];
        if (i != result.size() - 1) {
            cout << " ";
        } else {
            cout << endl;
        }
    }

    return 0;
}
