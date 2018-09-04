#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(int argc, char *argv[])
{
    string line, word, result;
    stringstream ss;
    getline(cin, line);
    ss << line;

    while (ss >> word) {
        if (result == "") {
            result = word;
        } else {
            result = word + " " + result;
        }
    }
    cout << result << endl;

    return 0;
}
