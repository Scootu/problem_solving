#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int min_val = 1e9, max_val = 0;
    int min_count = 0, max_count = 0;

    int* arr = new int[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];

        if (arr[i] < min_val) {
            min_val = arr[i];
            min_count = 1;
        } else if (arr[i] == min_val) {
            min_count++;
        }

        if (arr[i] > max_val) {
            max_val = arr[i];
            max_count = 1;
        } else if (arr[i] == max_val) {
            max_count++;
        }
    }

    int result = n - min_count - max_count;
    cout << (result > 0 ? result : 0) << endl;

    return 0;
}
