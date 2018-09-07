/**
 * @file    random.cpp
 * @brief
 * @authro  Jiang Yong [chiangyung@aliyun.com]
 * @version
 * @date    Wed Sep  5 22:10:13 2018
 ******************************************************************************/

#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char const* argv[])
{
    srand((unsigned int)time(NULL));
    cout << rand() % 85 + 1 << endl;

    return 0;
}

