#include <iostream>
#include <string> 
using namespace std;

int main() {
    string password;  

    while (true) {
        cout << "종료하고 싶으면 yes를 입력하세요>>";
        getline(cin, password); 

        if (password == "yes") { 
            cout << "종료합니다..." << endl;
            break;
        }
    }

    return 0;
}
