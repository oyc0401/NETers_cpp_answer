#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    cout << "더하기: " << a + b << endl;
    cout << "빼기: " << a - b << endl;
    cout << "곱하기: " << a * b << endl;
    double doubleA = a;
    cout << "나누기: " << doubleA / b << endl;
    cout << "몫: " << a / b << endl;
    cout << "나머지: " << a % b << endl;
    return 0;
}