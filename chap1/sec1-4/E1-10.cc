#include <iostream>
using namespace std;
int main() {
    int dif = 0, val = 10;
    while (val >= 0){
        dif -= val;
        --val;
    }
    cout << dif << endl;
}
