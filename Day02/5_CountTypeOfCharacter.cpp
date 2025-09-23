#include<iostream>
using namespace std;

int main() {
    char c;
    int lc = 0, uc = 0, dc = 0, sc = 0;

    while (true) {
        c = cin.get();
        if (c == '$') break;

        if (c >= 'a' && c <= 'z') {
            lc++;
        } else if (c >= 'A' && c <= 'Z') {
            uc++;
        } else if (c >= '0' && c <= '9') {
            dc++;
        } else if (c == '@' || c == '#' || c == '&') {
            sc++;
        }
    }

    cout << "number of lowercase is: " << lc << endl;
    cout << "number of uppercase is: " << uc << endl;
    cout << "number of digits is: " << dc << endl;
    cout << "number of special characters is: " << sc << endl;

    return 0;
}
