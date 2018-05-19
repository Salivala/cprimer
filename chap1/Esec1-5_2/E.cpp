#include <iostream>
#include "Sales_item.h"
using namespace std;
int main() {
    Sales_item trans, currentTrans;
    int count = 0;
    if (cin >> currentTrans) {
        count = 1;
    }
    while (cin >> trans) {
        if (trans.isbn() == currentTrans.isbn()) {
            count++;
        }
        else {
            cout << "There are " << count << " transactions for isbn " << currentTrans.isbn() << endl;
            currentTrans = trans;
            count = 1;
        }

    }
    cout << "There are " << count << " transactions for isbn " << currentTrans.isbn() << endl;
    return 0;
}
