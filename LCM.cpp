#include <iostream>
using namespace std;

int main() {
    int a, b, max;
    cin >> a >> b;

    max = (a > b) ? a : b;

    while(true) {
        if(max % a == 0 && max % b == 0) {
            cout << "LCM = " << max;
            break;
        }
        max++;
    }
    return 0;
}
