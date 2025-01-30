#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;  // Read the number of friends
    vector<int> p(n);  // Array to store who gave a gift to whom
    vector<int> result(n);  // Array to store the reversed information

    // Read the array of gift relationships
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }

    // Reverse the mapping: for each friend, find out who gave a gift to them
    for (int i = 0; i < n; i++) {
        result[p[i] - 1] = i + 1;  // Friend 'i+1' gave a gift to friend 'p[i]'
    }

    // Output the result
    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }

    return 0;
}
