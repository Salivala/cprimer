#include <iostream>
using namespace std;
int main() {
    cout << "Please supply two integers display the range of" << endl;
    int start, end, current;
    cin >> start >> end;
    current = start;
    while ( current <= end ) {
        cout << current << endl;
        current++;
    }
    return 0;
}
