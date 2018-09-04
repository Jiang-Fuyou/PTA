#include <stdio.h>
#include <iostream>
using namespace std;

const int CLK_TCK = 100;

int main(int argc, char *argv[])
{
    int C1, C2;
    cin >> C1 >> C2;

    int second = (C2 - C1 + 50) / CLK_TCK;

    int H = second / 3600;
    int M = (second - 3600 * H) / 60;
    int S = second - 3600 * H - 60 * M;

    printf("%02d:%02d:%02d\n", H, M ,S);

    return 0;
}
