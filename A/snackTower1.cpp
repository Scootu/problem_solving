#include <iostream>
#include <vector>
using namespace std;

template <typename T>
void write(T s) {
    cout << s;
}

int main() {
    int n;
    cin >> n;
    
    int *T1 = new int[n]; // Stores snack sizes in arrival order
    bool *arrived = new bool[n + 1](); // Tracks if a snack has arrived
    int next = n; // Start looking for the largest snack

    // Read all snacks into T1
    for (int i = 0; i < n; i++) {
        cin >> T1[i];
    }

    // Process snacks
    for (int i = 0; i < n; i++) {
        arrived[T1[i]] = true; // Mark this snack as fallen

        // Print available snacks in descending order
        while (next > 0 && arrived[next]) {
            write(next);
            cout << " ";
            next--;
        }
        cout << endl; // New line for each day
    }

    delete[] T1;
    delete[] arrived;
    return 0;
}
