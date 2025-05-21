#include <iostream>
using namespace std;

class Converter {
protected:
    double ratio;
    virtual double convert(double src) = 0; // 순수 가상 함수
    virtual string getSourceString() = 0;
    virtual string getDestString() = 0;
public:
    Converter(double ratio) { this->ratio = ratio; }
    void run() {
        double src;
        cout << getSourceString() << "을 " << getDestString() << "로 바꿉니다." << endl;
        cout << getSourceString() << "을 입력하세요 >> ";
        cin >> src;
        double result = convert(src);
        cout << "변환 결과 : " << result << " " << getDestString() << endl;
    }
};

class KmToMile : public Converter {
public:
    KmToMile(double ratio) : Converter(ratio) {} // Km당 Mile 값 (1.609344)
    string getSourceString() { return "Km"; }
    string getDestString() { return "Mile"; }
    double convert(double src) { return src / ratio; }
};

int main() {
    KmToMile toMile(1.609344); // 1 Mile = 1.609344 Km
    toMile.run();
    return 0;
}
