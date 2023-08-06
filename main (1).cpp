#include <iostream>

using namespace std;

int main() {
    int K;
    string X_str;
    cin >> K >> X_str;

    // 이진수를 10진수로 변환
    long long X = 0;
    for (char c : X_str) {
        X = X * 2 + (c - '0');
    }


    // 두 연산을 원하는 순서로 수행하여 X를 0으로 만들기
    int m = 0;
    int p=0;
    while (X > 0) {
        if((X * 2) % (1 << K)<(X + 1) % (1 << K)){
        X = (X * 2) % (1 << K);
        m++;
         if (X <= 0) {
            break;
        }
        
        }
        if((X * 2) % (1 << K)>(X + 1) % (1 << K)){
        X = (X + 2) % (1 << K);
        m++;
         if (X <= 0) {
            break;
        }
       
        }
    
        
    }
    cout << m << endl;

    return 0;

}
