/**
 * @file    random.cpp
 * @brief
 * @authro  Jiang Yong [chiangyung@aliyun.com]
 * @version
 * @date    Wed Sep  5 22:10:13 2018
 ******************************************************************************/

#include <iostream>
#include <set>
#include <cstdlib>
using namespace std;

int main(int argc, char const* argv[])
{
    srand((unsigned int)time(NULL));

    set<int> done;
    done.insert(2);
    done.insert(9);
    done.insert(10);
    done.insert(12);
    done.insert(16);
    done.insert(18);
    done.insert(19);
    done.insert(23);
    done.insert(25);
    done.insert(27);
    done.insert(32);
    done.insert(34);
    done.insert(41);
    done.insert(46);
    done.insert(50);
    done.insert(59);
    done.insert(60);
    done.insert(61);
    done.insert(62);
    done.insert(64);
    done.insert(65);
    done.insert(68);
    done.insert(69);
    done.insert(72);
    done.insert(76);
    done.insert(77);
    done.insert(78);
    done.insert(80);

    while (true) {
        int tmp = rand() % 85 + 1;
        if (done.count(tmp) == 0) {
            cout << tmp << endl;
            break;
        }
    }

    return 0;
}

