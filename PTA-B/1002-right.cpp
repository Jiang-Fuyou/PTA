#include <iostream>
#include <sstream>
#include <string>
using namespace std;


int main(int argc, char *argv[])
{
    int n;
    int sum = 0;
    string str, result;
    stringstream ss;

    cin >> str;

    for (unsigned int i = 0; i < str.size(); i++) {
        ss << str[i];
        ss >> n;
        ss.clear();
        ss.str("");
        sum += n;
    }

    ss << sum;
    ss >> result;

    for (unsigned int i = 0; i < result.size(); i++) {
        if (result[i] == '0') cout << "ling";
        if (result[i] == '1') cout << "yi";
        if (result[i] == '2') cout << "er";
        if (result[i] == '3') cout << "san";
        if (result[i] == '4') cout << "si";
        if (result[i] == '5') cout << "wu";
        if (result[i] == '6') cout << "liu";
        if (result[i] == '7') cout << "qi";
        if (result[i] == '8') cout << "ba";
        if (result[i] == '9') cout << "jiu";

        if (i != result.size() - 1) cout << " ";
    }
    cout << endl;

    return 0;
}
