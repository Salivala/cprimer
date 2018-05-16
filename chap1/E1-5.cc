#include <iostream>
using namespace std;
// Add numbers between 50 and 100
int main() {
    int sum = 0, val = 50;
    while(val <= 100) {
        sum += val;
        val++;
    }
    cout << sum;
}
