#include <iostream>
using namespace std;

int main() {
    int jiahan, jiahua, yihan, yihua;
    int n;
    int jia = 0;
    int yi = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> jiahan >> jiahua >> yihan >> yihua;
        if (jiahan + yihan == jiahua && yihan + jiahan != yihua)
            yi++;
        if (jiahan + yihan != jiahua && yihan + jiahan == yihua)
            jia++;
    }
    cout << jia << " " << yi;
    return 0;
}
