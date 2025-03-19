#include <iostream>
#include <string>
using namespace std;

int main() {

    cout << "문자열 입력>>";
    string name;
    getline(cin, name, '\n');

    int n = name.length();

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << name[j];
        }
        cout << endl;
    }
    return 0;
}
