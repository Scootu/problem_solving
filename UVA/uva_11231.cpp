#include <iostream>
#include <string>

using namespace std;


int main() {
    int n = 8, m = 8, c = 0; // default value
    while (n != 0 || m != 0 || c != 0) {
        cin >> n >> m >> c;
        // Exit condition
        if (n == 0 && m == 0 && c == 0) {
            break;
        }

        // Calculate possible positions for 8x8 chessboards
        int numRows = n - 7; // number of 8-cell rows that can fit in n rows
        int numCols = m - 7; // number of 8-cell columns that can fit in m columns

        // Total possible 8x8 chessboards in this grid
        int totalBoards = (numRows * numCols + c) / 2;
        cout << totalBoards << endl;
    }
    return 0;
}
