#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int S = 0;

    if (N > 10000 || N < -10000) {
        cout << "N is out of range";
        return 0;
    }

    if (N >= 1) {
        for (int i = 1; i <= N; i++) {
            S += i;
        }
    } else {
        for (int i = N; i <= 1; i++) {
            S += i;
        }
    }

    cout << S;
}