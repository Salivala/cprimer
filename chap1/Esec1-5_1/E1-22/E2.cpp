#include <iostream>
#include "Sales_item.h"
using namespace std;

int main() {
    Sales_item transaction, transactionSum;
    if (cin >> transaction) {
        transactionSum = transaction;
        while (cin >> transaction) {
            transaction += transactionSum;
            transactionSum = transaction;
        }
        cout << transactionSum << endl;
        return 0;
    }
    return -1;

}
