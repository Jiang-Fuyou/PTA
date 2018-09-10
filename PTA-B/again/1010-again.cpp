/**
 * @file    1010-again.cpp
 * @brief
 * @authro  Jiang Yong [chiangyung@aliyun.com]
 * @version
 * @date    Fri Sep  7 22:21:15 2018
 ******************************************************************************/

#include <iostream>
#include <vector>
#include <sstream>
#include <string>
using namespace std;

int main(int argc, char const* argv[])
{
    int temp1, temp2;
    vector<int> coeff;
    vector<int> index;
    string line;
    stringstream ss;
    bool flag = false;

    getline(cin, line);
    ss << line;
    while (ss >> temp1 >> temp2) {
        coeff.push_back(temp1);
        index.push_back(temp2);
    }

    for (int i = 0; i < coeff.size(); i++) {
        if (index[i] != 0) {
            if (flag) cout << " ";
            cout << coeff[i] * index[i] << " " << index[i] - 1;
            flag = true;
        }
    }

    if (!flag) {
        cout << "0 0";
    }

    return 0;
}
