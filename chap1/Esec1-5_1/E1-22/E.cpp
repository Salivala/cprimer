#include <iostream>
#include "Sales_item.h"
using namespace std;

int main() {
    Sales_item transaction, previousTransactionSum;
    if (cin >> transaction ) {
        previousTransactionSum = transaction;
        while(cin >> transaction) {
            if (transaction.isbn() == previousTransactionSum.isbn()) {
                transaction += previousTransactionSum;
                previousTransactionSum = transaction;
            }
            else {
                cerr << " transaction isbn's do not match!" << endl;
                return -1;
            }
        }
        cout << "total transaction sum is " << previousTransactionSum << endl;
        return 0;
    }
    else {
        cerr << "no numbers" << endl;
        return -1;
    }

}
