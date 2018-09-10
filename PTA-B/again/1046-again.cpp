/**
 * @file    1046-again.cpp
 * @brief
 * @authro  Jiang Yong [chiangyung@aliyun.com]
 * @version
 * @date    Fri Sep  7 23:36:11 2018
 ******************************************************************************/

#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
    int jiahan, jiahua, yihan, yihua;
    int jia = 0, yi = 0;
    int n;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> jiahan >> jiahua >> yihan >> yihua;
        if (jiahua == jiahan + yihan && yihua != jiahan + yihan) {
            yi++;
        }
        if (yihua == jiahan + yihan && jiahua != jiahan + yihan) {
            jia++;
        }
    }

    cout << jia << " " << yi << endl;

    return 0;
}
