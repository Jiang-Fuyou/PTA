/**
 * @file    1034-again.cpp
 * @brief
 * @authro  Jiang Yong [chiangyung@aliyun.com]
 * @version
 * @date    Fri Sep  7 22:43:21 2018
 ******************************************************************************/

#include <cstdio>
#include <iostream>
using namespace std;

long long int a, b, c, d;

int  gcd(long long int n1, long long int n2);
void func(long long int n1, long long int n2);
void add();
void sub();
void mul();
void div();

int main(int argc, char const* argv[])
{
    scanf("%lld/%lld %lld/%lld", &a, &b, &c, &d);

    add();
    sub();
    mul();
    div();

    return 0;
}

void func(long long int n1, long long int n2)
{
    bool minus = false;

    // 分母为0
    if (n2 == 0) {
        cout << "Inf";
        return;
    }

    // 分子为0
    if (n1 == 0) {
        cout << "0";
        return;
    }

    // 分母小于0
    if (n1 < 0) {
        n1 *= -1;
        minus = !minus;
    }

    // 分子小于0
    if (n2 < 0) {
        n2 *= -1;
        minus = !minus;
    }

    // 化简分数
    int i = n1 / n2;
    int j = n1 - i * n2;
    int g = gcd(j, n2);
    // 如果j=0，则化简后是整数，需要特别说明
    j /= g;
    n2 /= g;

    if (i == 0) {
        if (minus) {
            cout << "(-" << j << "/" << n2 << ")";
        } else {
            cout << j << "/" << n2;
        }
    } else {
        if (j == 0) {
            if (minus) {
                cout << "(-" << i << ")";
            } else {
                cout << i;
            }
        } else {
            if (minus) {
                cout << "(-" << i << " " << j << "/" << n2 << ")";
            } else {
                cout << i << " " << j << "/" << n2;
            }
        }
    }
}

int gcd(long long int n1, long long int n2) {
    return n2 == 0 ? n1 : gcd(n2, n1 % n2);
}

void add()
{
    long long int m = a * d + b * c;
    long long int n = b * d;
    func(a, b);
    cout << " + ";
    func(c, d);
    cout << " = ";
    func(m, n);
    cout << endl;
}

void sub()
{
    long long int m = a * d - b * c;
    long long int n = b * d;
    func(a, b);
    cout << " - ";
    func(c, d);
    cout << " = ";
    func(m, n);
    cout << endl;
}

void mul()
{
    long long int m = a * c;
    long long int n = b * d;
    func(a, b);
    cout << " * ";
    func(c, d);
    cout << " = ";
    func(m, n);
    cout << endl;
}

void div()
{
    long long int m = a * d;
    long long int n = b * c;
    func(a, b);
    cout << " / ";
    func(c, d);
    cout << " = ";
    func(m, n);
    cout << endl;
}
