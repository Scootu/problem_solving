#include <iostream>
using namespace std;

// Function to calculate the number of days in a given month of a given year
int daysInMonth(int month, int year) {
    if (month == 2) { // February
        return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) ? 29 : 28;
    }
    // Months with 31 days
    if (month == 1 || month == 3 || month == 5 || month == 7 || 
        month == 8 || month == 10 || month == 12) {
        return 31;
    }
    // All other months have 30 days
    return 30;
}

void solve(int n) {
    int D1, M1, Y1, C1; // Previous date and consumption
    int D2, M2, Y2, C2; // Current date and consumption
    int count = 0, sum = 0;

    // Read the first entry
    cin >> D1 >> M1 >> Y1 >> C1;

    for (int i = 1; i < n; ++i) {
        // Read the next entry
        cin >> D2 >> M2 >> Y2 >> C2;

        // Check if the dates are consecutive
        bool isConsecutive = false;

        // Case 1: Same year and month
        if (Y1 == Y2 && M1 == M2 && D2 == D1 + 1) {
            isConsecutive = true;
        }
        // Case 2: Same year, consecutive months
        else if (Y1 == Y2 && M2 == M1 + 1 && D1 == daysInMonth(M1, Y1) && D2 == 1) {
            isConsecutive = true;
        }
        // Case 3: Consecutive years (December → January)
        else if (Y2 == Y1 + 1 && M1 == 12 && D1 == 31 && M2 == 1 && D2 == 1) {
            isConsecutive = true;
        }

        // Update the count and sum if dates are consecutive
        if (isConsecutive) {
            count++;
            sum += (C2 - C1);
        }

        // Update the previous date and consumption
        D1 = D2;
        M1 = M2;
        Y1 = Y2;
        C1 = C2;
    }

    // Output the result for this test case
    cout << count << " " << sum << "\n";
}

int main() {
    int n;

    // Process multiple test cases
    while (true) {
        cin >> n;
        if (n == 0) break; // End of input
        solve(n);
    }

    return 0;
}
