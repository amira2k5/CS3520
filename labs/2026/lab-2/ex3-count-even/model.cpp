
#include <iostream>
using namespace std;

int main() {
    int arr[] = {4, 7, 10, 13, 18, 21};
    int n = sizeof(arr) / sizeof(arr[0]);
    int count = 0;

    for (int i = 0; i < n; i++) {
        if ((arr[i] & 1) == 0) {
            count++;
        }
    }

    cout << count << '\n';
    return 0;
}
