

#include <iostream>
using namespace std;

int ara(int num[5]) {

    int intSum = num[0] + num[1] + num[2] + num[3] + num[4];
    int evg = intSum / 5;

    return evg;
}

int main() {
    // 1. 정수형 배열 선언 및 연산
    int numbers[5];

    cin >> numbers[0];
    cin >> numbers[1];
    cin >> numbers[2];
    cin >> numbers[3];
    cin >> numbers[4];
    cout << ara(numbers);

    return 0;
}