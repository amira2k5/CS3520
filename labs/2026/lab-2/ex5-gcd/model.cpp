
#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (a != b) {
        if (a > b) {
            a -= b;
        } else {
            b -= a;
        }
    }

    return a;
}

int main() {
    cout << gcd(48, 18) << '\n';
    return 0;
}
