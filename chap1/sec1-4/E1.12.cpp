#include <iostream>
using namespace std;
// was wrong :  thought 201. didnt look closely enough, not being incremented by 1
int main() {
    int sum = 0;
    for (int i = -100; i <=100; ++i) {
        sum++;
        cout << sum << endl;
    }
}
