#include <iostream>
using namespace std;

int main() {
    double num[5];
    double max;  

    cout << "5개의 실수를 입력하라>>";

    cin >> num[0];
    max = num[0];

    for (int i = 1; i < 5; i++) {
        cin >> num[i];  
        if (num[i] > max) {
            max = num[i]; 
        }
    }
    cout << "제일 큰 수 = " << max << endl; 

    return 0;
}
